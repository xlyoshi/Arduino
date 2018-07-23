//Projeto 8 - Mood Lamp RGB

float RGB1[3],RGB2[3],INC[3];
int red,green,blue;
int redPin = 11,greenPin=10,bluePin=9;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));/* Determina um valor de
  semente para os números pseudoaleatórios*/
}

void loop() {
  ToRed();
  RedToOrange();
  OrangeToYellow();
  YellowToGreen();
  GreenToBlue();
  BlueToPurple();
  VioletToPurple();
  End();
  delay(1000);
}
void ToRed(){
  RGB1[0]=0;
  RGB1[1]=0;
  RGB1[2]=0;

  RGB2[0]=255;
  RGB2[1]=0;
  RGB2[2]=0;
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
    delay(10);

    RGB1[0]-=INC[0];
    RGB1[1]-=INC[1];
    RGB1[2]-=INC[2];
  }
}
void RedToOrange(){
  RGB1[0]=255;
  RGB1[1]=0;
  RGB1[2]=0;

  RGB2[0]=255;
  RGB2[1]=127;
  RGB2[2]=0;
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
    delay(10);

    RGB1[0]-=INC[0];
    RGB1[1]-=INC[1];
    RGB1[2]-=INC[2];
  }
}
void OrangeToYellow(){
  RGB1[0]=255;
  RGB1[1]=127;
  RGB1[2]=0;

  RGB2[0]=255;
  RGB2[1]=255;
  RGB2[2]=0;
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
    delay(10);

    RGB1[0]-=INC[0];
    RGB1[1]-=INC[1];
    RGB1[2]-=INC[2];
  }
}
void YellowToGreen(){
  RGB1[0]=255;
  RGB1[1]=255;
  RGB1[2]=0;

  RGB2[0]=0;
  RGB2[1]=255;
  RGB2[2]=0;
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
    delay(10);

    RGB1[0]-=INC[0];
    RGB1[1]-=INC[1];
    RGB1[2]-=INC[2];
  }
}

void GreenToBlue(){
  RGB1[0]=0;
  RGB1[1]=255;
  RGB1[2]=0;

  RGB2[0]=0;
  RGB2[1]=0;
  RGB2[2]=255;
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
    delay(10);

    RGB1[0]-=INC[0];
    RGB1[1]-=INC[1];
    RGB1[2]-=INC[2];
  }
}

void BlueToPurple(){
  RGB1[0]=0;
  RGB1[1]=0;
  RGB1[2]=255;

  RGB2[0]=75;
  RGB2[1]=0;
  RGB2[2]=130;
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
    delay(10);

    RGB1[0]-=INC[0];
    RGB1[1]-=INC[1];
    RGB1[2]-=INC[2];
  }
}

void VioletToPurple(){
  RGB1[0]=75;
  RGB1[1]=0;
  RGB1[2]=130;

  RGB2[0]=143;
  RGB2[1]=0;
  RGB2[2]=255;
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
    delay(10);

    RGB1[0]-=INC[0];
    RGB1[1]-=INC[1];
    RGB1[2]-=INC[2];
  }
}

void End(){
  RGB1[0]=143;
  RGB1[1]=0;
  RGB1[2]=255;

  RGB2[0]=0;
  RGB2[1]=0;
  RGB2[2]=0;
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
    delay(10);

    RGB1[0]-=INC[0];
    RGB1[1]-=INC[1];
    RGB1[2]-=INC[2];
  }
}
