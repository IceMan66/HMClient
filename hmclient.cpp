/*
 *--------oO()Oo-------
 */
 #include "hmclient.h"
 
//
//  Construct a new HMClient object using the default CCU2 address.
//
 HMClient::HMClient(){
	m_host = "homematic-ccu2";
	m_port = 8181; 
 }
 
String HMClient::postData(char * host, uint16_t port, String url){
	
}

 boolean HMClient::setHMSystemVariable(HMSysVar_t *HMSV){
	 
 }
 
 
 boolean HMClient::getHMSystemVariable(HMSysVar_t *HMSV){
	 
 }
