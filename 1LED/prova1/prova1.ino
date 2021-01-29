void setup() {
  pinMode(13, OUTPUT); //configurazione pin 13 come output
}

void loop() {
 digitalWrite(13,HIGH); //accendo il pin 13
 delay(2000); //attendo 2 secondi
 digitalWrite(13,LOW); //spengo il pin 13
 delay(5000); //attendo 5 secondi
}
