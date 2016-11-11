
#include <ESP8266WiFi.h>
#include <HMClient.h>

const char* ssid     = "Your SSID";
const char* passcode = "Your PASSCODE";

HMClient Homematic;

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
  
  hmstring_t RoofWeather;
  
  if (Homematic.setHMSystemVariable(&RoofWeather)) {
    Serial.printf("Set Homematic Variable to Value : %s\n", RoofWeather.Value);
  }
  
}//end setup

void loop() {
  // put your main code here, to run repeatedly:
  yield();
}//end loop
