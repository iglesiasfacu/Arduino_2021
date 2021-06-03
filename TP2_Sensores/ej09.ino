#define rojo 8
#define azul 9
#define verde 10
#define pulsador 11

void setup(){
  Serial.begin(9600);
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(pulsador, INPUT);
}

void loop(){
  int valor = digitalRead(pulsador);
  
  if(valor==HIGH){
  	digitalWrite(rojo,HIGH);
  }
  else{ 
    digitalWrite(rojo,LOW);
    digitalWrite(azul,LOW);
    digitalWrite(verde,LOW);
    delay(200);
  }
}