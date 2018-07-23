//Projeto 7 - Lâmpada Pulsante

int ledPin=11;
float sinVal;
int ledVal;

void setup() {
  pinMode(ledPin,OUTPUT);
}

void loop() {
  for(int c = 0;c<180;c++){
    //Converte graus em Radianos e então obtem o valor
    //do seno
    sinVal = (sin(c*(3.1416/180)));
    ledVal = int(sinVal*255);
    analogWrite(ledPin,ledVal);
    delay(25);
  }
}
