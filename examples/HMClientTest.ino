
#include <ESP8266WiFi.h>
#include <HMClient.h>

const char* ssid     = "Your SSID";
const char* passcode = "Your PASSCODE";

HMClient HM_Default;
HMClient HMU_UserDefined("Server1");

void setup() {
  // put your setup code here, to run once:  
  Serial.begin(115200);
  Serial.flush();
  Serial.println("Booting");
  WiFi.begin(ssid, passcode);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("Connected");
}

void loop() {

  
}
