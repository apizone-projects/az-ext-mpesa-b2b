"Bismillah, ar-Rahman, ar-Rahim"
---

Steps:
---
ssh skhan@192.168.99.100  
wsdl2h -o mpesab2b.h wsdl/AZDTBMPesaB2BService.wsdl   
soapcpp2 -j mpesab2b.h  
touch mpesab2b.cpp  
  
c++ -o az-ext-mpesa-b2b.cgi mpesab2b.cpp soapC.cpp soapC2BPaymentValidationAndConfirmationBindingService.cpp /home/skhan/softwares/gsoap-2.8/gsoap/stdsoap2.cpp  

