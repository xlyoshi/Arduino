void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
  //3 pontos
  for(int a = 0;a<3;a++){
    digitalWrite(13,HIGH);
    delay(150);
    digitalWrite(13,LOW);
    delay(100);
  }
  delay(500);
  //3 traços
  for(int a = 0;a<3;a++){
    digitalWrite(13,HIGH);
    delay(400);
    digitalWrite(13,LOW);
    delay(100);
  }
  delay(500);
  //3 pontos
  for(int a = 0;a<3;a++){
    digitalWrite(13,HIGH);
    delay(150);
    digitalWrite(13,LOW);
    delay(100);
  }
  delay(5000);
}
