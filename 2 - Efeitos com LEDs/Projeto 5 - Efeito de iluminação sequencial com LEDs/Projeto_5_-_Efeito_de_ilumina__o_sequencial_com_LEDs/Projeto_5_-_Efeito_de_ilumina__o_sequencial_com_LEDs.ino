//Projeto 5 - Efeito de iluminação sequêncial com leds
byte ledPin[]={4,5,6,7,8,9,10,11,12,13};

int ledDelay(50);//intervalo entre as alterações
int direcao = 1;
int currentLED=0;
unsigned long changeTime;
 
void setup() {
  for(int x=0;x<10;x++){
    pinMode(ledPin[x],OUTPUT);
  }
  changeTime=millis();//Pega o tempo decorrido desde o inicio da aplicação
  }

void loop() {
  if((millis()-changeTime)>ledDelay){//Verifica se já transcorreram ledDelay ms
    //Desde a última alteração
    changeLED();
    changeTime = millis();      
  }
}

void changeLED(){
  for(int x=0;x<10;x++){//apaga todos os leds
    digitalWrite(ledPin[x],LOW);
  }
  digitalWrite(ledPin[currentLED],HIGH);//acende o led atual
  currentLED+=direcao;//incrementa de acordo com o valor de direção
  //altera a direção se tiver chegado no fim;
  if(currentLED==9){direcao=-1;}
  if(currentLED==0){direcao=1;}
}

