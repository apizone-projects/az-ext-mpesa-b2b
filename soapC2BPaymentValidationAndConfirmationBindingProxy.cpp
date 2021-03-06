/* soapC2BPaymentValidationAndConfirmationBindingProxy.cpp
   Generated by gSOAP 2.8.60 for mpesab2b.h

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include "soapC2BPaymentValidationAndConfirmationBindingProxy.h"

C2BPaymentValidationAndConfirmationBindingProxy::C2BPaymentValidationAndConfirmationBindingProxy()
{	this->soap = soap_new();
	this->soap_own = true;
	C2BPaymentValidationAndConfirmationBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

C2BPaymentValidationAndConfirmationBindingProxy::C2BPaymentValidationAndConfirmationBindingProxy(const C2BPaymentValidationAndConfirmationBindingProxy& rhs)
{	this->soap = rhs.soap;
	this->soap_own = false;
	this->soap_endpoint = rhs.soap_endpoint;
}

C2BPaymentValidationAndConfirmationBindingProxy::C2BPaymentValidationAndConfirmationBindingProxy(struct soap *_soap)
{	this->soap = _soap;
	this->soap_own = false;
	C2BPaymentValidationAndConfirmationBindingProxy_init(_soap->imode, _soap->omode);
}

C2BPaymentValidationAndConfirmationBindingProxy::C2BPaymentValidationAndConfirmationBindingProxy(const char *endpoint)
{	this->soap = soap_new();
	this->soap_own = true;
	C2BPaymentValidationAndConfirmationBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = endpoint;
}

C2BPaymentValidationAndConfirmationBindingProxy::C2BPaymentValidationAndConfirmationBindingProxy(soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	C2BPaymentValidationAndConfirmationBindingProxy_init(iomode, iomode);
}

C2BPaymentValidationAndConfirmationBindingProxy::C2BPaymentValidationAndConfirmationBindingProxy(const char *endpoint, soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	C2BPaymentValidationAndConfirmationBindingProxy_init(iomode, iomode);
	soap_endpoint = endpoint;
}

C2BPaymentValidationAndConfirmationBindingProxy::C2BPaymentValidationAndConfirmationBindingProxy(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->soap_own = true;
	C2BPaymentValidationAndConfirmationBindingProxy_init(imode, omode);
}

C2BPaymentValidationAndConfirmationBindingProxy::~C2BPaymentValidationAndConfirmationBindingProxy()
{	if (this->soap_own)
		soap_free(this->soap);
}

void C2BPaymentValidationAndConfirmationBindingProxy::C2BPaymentValidationAndConfirmationBindingProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] = {
        {"SOAP-ENV", "http://schemas.xmlsoap.org/soap/envelope/", "http://www.w3.org/*/soap-envelope", NULL},
        {"SOAP-ENC", "http://schemas.xmlsoap.org/soap/encoding/", "http://www.w3.org/*/soap-encoding", NULL},
        {"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
        {"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
        {"ns1", "http://cps.huawei.com/cpsinterface/c2bpayment", NULL, NULL},
        {NULL, NULL, NULL, NULL}
    };
	soap_set_namespaces(this->soap, namespaces);
}

C2BPaymentValidationAndConfirmationBindingProxy *C2BPaymentValidationAndConfirmationBindingProxy::copy()
{	C2BPaymentValidationAndConfirmationBindingProxy *dup = SOAP_NEW_UNMANAGED(C2BPaymentValidationAndConfirmationBindingProxy);
	if (dup)
		soap_copy_context(dup->soap, this->soap);
	return dup;
}

C2BPaymentValidationAndConfirmationBindingProxy& C2BPaymentValidationAndConfirmationBindingProxy::operator=(const C2BPaymentValidationAndConfirmationBindingProxy& rhs)
{	if (this->soap != rhs.soap)
	{	if (this->soap_own)
			soap_free(this->soap);
		this->soap = rhs.soap;
		this->soap_own = false;
		this->soap_endpoint = rhs.soap_endpoint;
	}
	return *this;
}

void C2BPaymentValidationAndConfirmationBindingProxy::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void C2BPaymentValidationAndConfirmationBindingProxy::reset()
{	this->destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	C2BPaymentValidationAndConfirmationBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void C2BPaymentValidationAndConfirmationBindingProxy::soap_noheader()
{	this->soap->header = NULL;
}

::SOAP_ENV__Header *C2BPaymentValidationAndConfirmationBindingProxy::soap_header()
{	return this->soap->header;
}

::SOAP_ENV__Fault *C2BPaymentValidationAndConfirmationBindingProxy::soap_fault()
{	return this->soap->fault;
}

const char *C2BPaymentValidationAndConfirmationBindingProxy::soap_fault_string()
{	return *soap_faultstring(this->soap);
}

const char *C2BPaymentValidationAndConfirmationBindingProxy::soap_fault_detail()
{	return *soap_faultdetail(this->soap);
}

int C2BPaymentValidationAndConfirmationBindingProxy::soap_close_socket()
{	return soap_closesock(this->soap);
}

int C2BPaymentValidationAndConfirmationBindingProxy::soap_force_close_socket()
{	return soap_force_closesock(this->soap);
}

void C2BPaymentValidationAndConfirmationBindingProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void C2BPaymentValidationAndConfirmationBindingProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *C2BPaymentValidationAndConfirmationBindingProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

int C2BPaymentValidationAndConfirmationBindingProxy::ValidateC2BPayment(const char *endpoint, const char *soap_action, _ns1__C2BPaymentValidationRequest *ns1__C2BPaymentValidationRequest, _ns1__C2BPaymentValidationResult &ns1__C2BPaymentValidationResult)
{	struct soap *soap = this->soap;
	struct __ns1__ValidateC2BPayment soap_tmp___ns1__ValidateC2BPayment;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "https://0.0.0.0:0/eXSAPI/proxy/MPesaC2BProxyService";
	if (soap_action == NULL)
		soap_action = "ValidateC2BPayment";
	soap_tmp___ns1__ValidateC2BPayment.ns1__C2BPaymentValidationRequest = ns1__C2BPaymentValidationRequest;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__ValidateC2BPayment(soap, &soap_tmp___ns1__ValidateC2BPayment);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__ValidateC2BPayment(soap, &soap_tmp___ns1__ValidateC2BPayment, "-ns1:ValidateC2BPayment", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__ValidateC2BPayment(soap, &soap_tmp___ns1__ValidateC2BPayment, "-ns1:ValidateC2BPayment", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns1__C2BPaymentValidationResult*>(&ns1__C2BPaymentValidationResult)) // NULL ref?
		return soap_closesock(soap);
	ns1__C2BPaymentValidationResult.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__C2BPaymentValidationResult.soap_get(soap, "ns1:C2BPaymentValidationResult", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int C2BPaymentValidationAndConfirmationBindingProxy::ConfirmC2BPayment(const char *endpoint, const char *soap_action, _ns1__C2BPaymentConfirmationRequest *ns1__C2BPaymentConfirmationRequest, std::string &ns1__C2BPaymentConfirmationResult)
{	struct soap *soap = this->soap;
	struct __ns1__ConfirmC2BPayment soap_tmp___ns1__ConfirmC2BPayment;
	struct __ns1__ConfirmC2BPaymentResponse *soap_tmp___ns1__ConfirmC2BPaymentResponse;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "https://0.0.0.0:0/eXSAPI/proxy/MPesaC2BProxyService";
	if (soap_action == NULL)
		soap_action = "ConfirmC2BPayment";
	soap_tmp___ns1__ConfirmC2BPayment.ns1__C2BPaymentConfirmationRequest = ns1__C2BPaymentConfirmationRequest;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__ConfirmC2BPayment(soap, &soap_tmp___ns1__ConfirmC2BPayment);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__ConfirmC2BPayment(soap, &soap_tmp___ns1__ConfirmC2BPayment, "-ns1:ConfirmC2BPayment", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__ConfirmC2BPayment(soap, &soap_tmp___ns1__ConfirmC2BPayment, "-ns1:ConfirmC2BPayment", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<std::string*>(&ns1__C2BPaymentConfirmationResult)) // NULL ref?
		return soap_closesock(soap);
	soap_default_std__string(soap, &ns1__C2BPaymentConfirmationResult);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_tmp___ns1__ConfirmC2BPaymentResponse = soap_get___ns1__ConfirmC2BPaymentResponse(soap, NULL, "-ns1:ConfirmC2BPaymentResponse", NULL);
	if (!soap_tmp___ns1__ConfirmC2BPaymentResponse || soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	ns1__C2BPaymentConfirmationResult = soap_tmp___ns1__ConfirmC2BPaymentResponse->ns1__C2BPaymentConfirmationResult;
	return soap_closesock(soap);
}
/* End of client proxy code */
