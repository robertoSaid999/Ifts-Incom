#include "SR04.h"
#include <Servo.h>
SR04 sr04 = SR04(11, 12);

int posServo = 0;
Servo myservo;
int distanza;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  myservo.attach(9);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  distanza = sr04.Distance();
  if (distanza < 20) {
    myservo.write(0);
    //    delay(100);
    Serial.println(distanza);
    digitalWrite(LED_BUILTIN, LOW);
  }
  else {
    myservo.write(180);
    digitalWrite(LED_BUILTIN, HIGH);
  }
}
