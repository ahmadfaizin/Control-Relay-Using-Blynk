// Comment this out to disable prints and save space
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


char auth[] = "M3Nz8NWs8OdStVnrMc4fcYsXuf_ldELA";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Pesma SDM IPTEK";
char pass[] = "benTen10";

BlynkTimer timer;
void setup()
{
  // Debug console
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}
void loop()
{
  Blynk.run();  
  
}
