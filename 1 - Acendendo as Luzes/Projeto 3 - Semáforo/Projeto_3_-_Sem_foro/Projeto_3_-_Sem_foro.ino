void setup() {
  pinMode(13,OUTPUT);//verde
  pinMode(12,OUTPUT);//amarelo
  pinMode(11,OUTPUT);//vermelho
}

void loop() {
  digitalWrite(13,HIGH);
  delay(10000);
  digitalWrite(13,LOW);
  delay(100);
  digitalWrite(12,HIGH);
  delay(2000);
  digitalWrite(12,LOW);
  delay(100);
  digitalWrite(11,HIGH);
  delay(15000);
  digitalWrite(11,LOW);
}
