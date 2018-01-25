
#include "C2BPaymentValidationAndConfirmationBinding.nsmap"
#include "soapC2BPaymentValidationAndConfirmationBindingService.h"
#include "queue_publisher.h"
#include <uuid/uuid.h>
#include "soapH.h"
#include <sstream>

using namespace std;

std::string generateUUID();

int main()
{
    C2BPaymentValidationAndConfirmationBindingService serv(SOAP_XML_INDENT);
    if(serv.serve() != SOAP_OK)
        serv.soap_stream_fault(std::cerr);
    serv.destroy();

}

int C2BPaymentValidationAndConfirmationBindingService::ConfirmC2BPayment(_ns1__C2BPaymentConfirmationRequest *ns1__C2BPaymentConfirmationRequest, std::string &ns1__C2BPaymentConfirmationResult) 
{
    std::string correlId = generateUUID();

    struct soap *soap = soap_new();
    std::stringstream ss;
    soap->os = &ss;
    soap_write__ns1__C2BPaymentConfirmationRequest(soap, ns1__C2BPaymentConfirmationRequest); 
    soap->os = NULL;
    //std::cout << "The XML is:\n" << ss.str();

    soap_destroy(soap);
    soap_end(soap);
    soap_free(soap);

    QueuePublisher queuePublisher;
    queuePublisher.send_to_queue(correlId, ss.str());
    ns1__C2BPaymentConfirmationResult = "Transaction Queued; Reference# " + correlId;
    return SOAP_OK;
}


int C2BPaymentValidationAndConfirmationBindingService::ValidateC2BPayment(_ns1__C2BPaymentValidationRequest *ns1__C2BPaymentValidationRequest, _ns1__C2BPaymentValidationResult &ns1__C2BPaymentValidationResult) 
{
    //cout << "Reached to ValidateC2BPayment...";
    return SOAP_OK;
}

std::string generateUUID()
{
    uuid_t id;
    uuid_generate(id);

    char *string = new char[100];
    uuid_unparse(id, string);

    return string;
}
