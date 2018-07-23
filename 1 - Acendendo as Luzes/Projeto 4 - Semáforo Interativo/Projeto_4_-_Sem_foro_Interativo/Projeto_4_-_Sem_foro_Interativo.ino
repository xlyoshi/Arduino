const int verm = 13;
const int ama = 12;
const int verd = 11;
const int livre = 10;
const int esp = 9;
const int btn = 8;
int val = 0;
unsigned long changeTime;
void setup() {
  pinMode(verm,OUTPUT);
  pinMode(ama,OUTPUT);
  pinMode(verd,OUTPUT);
  pinMode(livre,OUTPUT);
  pinMode(esp,OUTPUT);
  pinMode(btn,INPUT);

  digitalWrite(verd, HIGH);
  digitalWrite(esp,HIGH);
}

void loop() {
  val = digitalRead(btn);
  if(val == HIGH && ((millis()-changeTime)>5000)){
    changeLights();
  }
}
void changeLights(){
  digitalWrite(verd,LOW);
  digitalWrite(ama,HIGH);

  delay(2000);

  digitalWrite(ama,LOW);
  digitalWrite(verm,HIGH);

  delay(1000);

  digitalWrite(esp,LOW);
  digitalWrite(livre,HIGH);
  delay(5000);

  for(int c = 0;c<10;c++){
    digitalWrite(livre,HIGH);
    delay(250);
    digitalWrite(livre,LOW);
    delay(250);
  }

  digitalWrite(esp,HIGH);
  delay(500);

  digitalWrite(ama,HIGH);
  digitalWrite(verm,LOW);
  delay(1000);
  digitalWrite(verd,HIGH);
  digitalWrite(ama,LOW);
  changeTime = millis();
}

