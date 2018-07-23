//Desafio - Sequencia de LEDs
/*O programa utiliza dez led e faz com que os da
extremidade comecem ligados e então vão se aproximando
até que se encontram ligados no meio e vão em sentido
inverso

Author: Wanghley S. Martins*/
byte ledPin[]={4,5,6,7,8,9,10,11,12,13};
int currentLED1 = 0, currentLED2=10;
int direction=1;
int ledDelay(100);
unsigned long changeTime;
void setup() {
  for(int c = 0;c<10;c++){
    pinMode(ledPin[c],OUTPUT);
  }
  changeTime = millis();
}

void loop() {
  if((millis()-changeTime)>ledDelay){
    changeLED();
    changeTime = millis();
  }
}

void changeLED(){
  for(int c = 0;c<10;c++){
    digitalWrite(ledPin[c],LOW);
  }
  digitalWrite(ledPin[currentLED1],HIGH);
  digitalWrite(ledPin[currentLED2],HIGH);
  currentLED1 +=direction;
  currentLED2 -=direction;
  if(currentLED1==5){direction=-1;};
  if(currentLED1==0){direction=1;};
}

