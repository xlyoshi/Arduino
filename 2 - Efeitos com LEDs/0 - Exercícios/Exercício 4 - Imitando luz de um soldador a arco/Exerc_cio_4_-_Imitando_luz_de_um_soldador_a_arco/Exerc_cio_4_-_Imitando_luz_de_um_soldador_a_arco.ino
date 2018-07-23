//Exercício 4 - Imitando  luz de um soldador a arco

int ledPin1=5,ledPin2=6,x;

void setup() {
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
}

void loop() {
  x=random(256);
  analogWrite(ledPin1,x);
  delay(50);
  analogWrite(ledPin2,x);
  delay(100);
  analogWrite(ledPin1,0);
  analogWrite(ledPin2,0);
  delay(500);
}
