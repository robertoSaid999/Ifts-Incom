void setup() {
  pinMode(13, OUTPUT); 
  pinMode(12, OUTPUT); 
  pinMode(11, OUTPUT); 
  pinMode(10, OUTPUT); 
}

void loop() {
 digitalWrite(13,HIGH); 
 delay(2000); 
 digitalWrite(12,HIGH);
 delay(2000);
 digitalWrite(11,HIGH); 
 delay(2000);
 digitalWrite(10,HIGH);
 delay(2000);
 digitalWrite(10,LOW);
 digitalWrite(11,LOW);
 digitalWrite(12,LOW);
 digitalWrite(13,LOW);
 delay(2000);
}
