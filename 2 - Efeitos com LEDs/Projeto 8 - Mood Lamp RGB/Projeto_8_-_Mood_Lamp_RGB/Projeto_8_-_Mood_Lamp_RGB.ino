//Projeto 8 - Mood Lamp RGB

float RGB1[3],RGB2[3],INC[3];
int red,green,blue;
int redPin = 11,greenPin=10,bluePin=9;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));/* Determina um valor de
  semente para os números pseudoaleatórios*/
  RGB1[0]=0;
  RGB1[1]=0;
  RGB1[2]=0;

  RGB2[0]=random(256);
  RGB2[1]=random(256);
  RGB2[2]=random(256);
}

void loop() {
  randomSeed(analogRead(0));

  for(int c=0;c<3;c++){
    INC[c]=((RGB1[c]-RGB2[c])/256);
  }

  for(int c = 0;c<256;c++){
    red = int(RGB1[0]);
    green = int(RGB1[1]);
    blue = int(RGB1[2]);

    analogWrite(redPin,red);
    analogWrite(greenPin,green);
    analogWrite(bluePin,blue);
    delay(3);

    RGB1[0]-=INC[0];
    RGB1[1]-=INC[1];
    RGB1[2]-=INC[2];
  }

  for(int c=0;c<3;c++){
    RGB2[c]=random(556)-300;
    RGB2[c]=constrain(RGB2[c],0,255);/*Faz com que não
    sejam retornados valores negativos ao pino de PWMijn */
    delay(10);
  }

}
