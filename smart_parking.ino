#define BLYNK_TEMPLATE_ID "TMPL3gR83ssXT"
#define BLYNK_TEMPLATE_NAME "Smart Parking System"
#define BLYNK_AUTH_TOKEN "XLhFePhXHalh6t1vCWJy2lWY7IJ8pXHx"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

const char *ssid = "wifi_name";
const char *pswd = "wifi_password";

const int echoPin = 4;   
const int trigPin = 5;    

long duration;
float distance;

void measureDistance()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  if (distance <= 10)
  {
    Blynk.virtualWrite(V0, "Slot Full");
  }
  else
  {
    Blynk.virtualWrite(V0, "Vacant");
  }
}

void setup()
{
  Serial.begin(115200);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pswd);
}

void loop()
{
  Blynk.run();

  measureDistance();

  delay(1000);
}