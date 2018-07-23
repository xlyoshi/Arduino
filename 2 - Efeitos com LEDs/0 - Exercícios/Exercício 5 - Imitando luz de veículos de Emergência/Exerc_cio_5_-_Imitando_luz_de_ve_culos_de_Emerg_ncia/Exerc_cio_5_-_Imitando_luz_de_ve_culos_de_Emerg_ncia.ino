//Exercício 5 - Imitando luz de veículos de Emergência

int ledPin[2]={5,6},currentLED=0,direction=1;

void setup() {
  for(int x = 0;x<2;x++){
    pinMode(ledPin[x],OUTPUT);
  }
}

void loop() {
  for(int x=0;x<2;x++){//apaga todos os leds
    digitalWrite(ledPin[x],LOW);
  }
  digitalWrite(ledPin[currentLED],HIGH);//acende o led atual
  currentLED+=direction;//incrementa de acordo com o valor de direção
  //altera a direção se tiver chegado no fim;
  if(currentLED==1){direction=-1;}
  if(currentLED==0){direction=1;}
  delay(150);
}
