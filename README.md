"Bismillah, ar-Rahman, ar-Rahim"
---

Building:
---
wsdl2h -o mpesab2b.h wsdl/AZMPesaB2BService.wsdl   
soapcpp2 -j mpesab2b.h  
touch mpesab2b.cpp  
 
Compiling
---

c++ -o az-ext-mpesa-b2b.cgi mpesab2b.cpp soapC.cpp soapC2BPaymentValidationAndConfirmationBindingService.cpp /home/skhan/softwares/gsoap-2.8/gsoap/stdsoap2.cpp queue_publisher.cpp -I/usr/local/include/activemq-cpp-3.9.4/ -I/usr/include/apr-1/ -lactivemq-cpp -lstdc++ -luuid

Testing
---
./az-ext-mpesa-b2b.cgi < C2BPaymentValidationAndConfirmationBinding.ConfirmC2BPayment.req.xml
