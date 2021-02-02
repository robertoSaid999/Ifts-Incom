void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, INPUT_PULLUP);//configurazione pin
}

void loop() {
  if(digitalRead(12)==LOW){
    digitalWrite(13,HIGH);
    delay(2000);
  }
  else
    digitalWrite(13,LOW);
}
