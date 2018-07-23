//Projeto 10 - Mood Lamp com controle Serial

char buffer[18];//Armazena os parametros dos leds
int red,green,blue;//parametros PWM dos leds
int redPin=9,greenPin=10,bluePin=11;//portas dos LEds

void setup() {
  Serial.begin(9600);//Inicia a comunicação serial
  while(Serial.available())//Limpa o serial
    Serial.read();
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT); 

  Serial.println("______________________________");
  Serial.println("|   Controle de Mood Lamp    |");
  Serial.println("| INPUT Format:              |");      
  Serial.println("|  r[val] g[val] b[val]      |");
  Serial.println("|  Example: r255 g140 b72    |");
  Serial.println("______________________________");
}

void loop() {
  if(Serial.available()>0){//Verifica se algo foi digitado
    int index=0;
    delay(100);//deixa o buffer encher
    int numChar = Serial.available();/*Numero de 
    caracteres digitados*/
    if(numChar>15){//garante que não estouraremos o buffer
      numChar=15;
    }
    while(numChar--){//enquanto numChar!=0
      buffer[index++]=Serial.read();//preenche os buffer
    }
    splitString(buffer);
    Serial.println("______________________________");
  }
}

void splitString(char* data){//passagem por referência com cahr*
  Serial.print("Data entered: ");
  Serial.println(data);
  char* parameter; 
  parameter = strtok(data," ,");//divide a string
  while(parameter!=NULL){
    setLED(parameter);
    parameter=strtok(NULL," ,");/*Pega o próximo 
    conjunto. O NULL indica que ela deve continuar de
    onde parou de extrair a string*/
  }
  //Limpa o texto e os buffers seriais
  for(int x = 0;x<16;x++){
    buffer[x]='\0';
  }
  while(Serial.available())
    Serial.read();
}

void setLED(char* data){
  if(data[0]=='r' || data[0]=='R'){
    int Ans = strtol(data+1,NULL,10);//COnverte os
    //inteiros depois da letra em Números inteiros longos
    Ans=constrain(Ans,0,255);//Limita o valor entre 0 e 255
    analogWrite(redPin,Ans);
    Serial.print("Red is set to: ");
    Serial.println(Ans);
  }
  if(data[0]=='g' || data[0]=='G'){
    int Ans = strtol(data+1,NULL,10);
    Ans=constrain(Ans,0,255);
    analogWrite(greenPin,Ans);
    Serial.print("Green is set to: ");
    Serial.println(Ans);
  }
  if(data[0]=='b' || data[0]=='B'){
    int Ans = strtol(data+1,NULL,10);
    Ans=constrain(Ans,0,255);
    analogWrite(bluePin,Ans);
    Serial.print("Blue is set to: ");
    Serial.println(Ans);
  }
}

