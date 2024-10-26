/*  Interfacing Temperature and Humidity Sensor (DHT11)-using One Wire Protocol */


#include<DHT.h>                //define library for sensor
#define DHTTYPE DHT11          //define macro
int dhtSensorPin = 3;
DHT dht(dhtSensorPin, DHTTYPE);   //pin initialization
float t, h;

void setup()
{
  Serial.begin(9600);
  dht.begin();
  pinMode(dhtSensorPin, INPUT);
  delay(2000);
}

void loop()
{
  t = dht.readTemperature();     //object to read the sensor value
  Serial.print("Temperature=");
  Serial.println(t);
  h = dht.readHumidity();
  Serial.print("Humidity=");
  Serial.println(h);
  delay(500);
}
