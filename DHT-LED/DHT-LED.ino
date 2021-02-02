#include "DHT.h"

#define DHTPIN 2

#define DHTTYPE DHT11

DHT dht(DHTPIN,DHTTYPE);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float percepita=dht.computeHeatIndex(dht.readTemperature(), dht.readHumidity(), false);
  Serial.println(percepita);
  if(percepita>21.00){
    digitalWrite(13,HIGH);
  }
  else
    digitalWrite(13,LOW);
}
