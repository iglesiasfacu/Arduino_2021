#define verde 8
#define azul 9
#define rojo 10

void setup(){
  Serial.begin(9600);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(rojo, OUTPUT);
}

void loop(){
  //c=contador
  for(int c=1; c<8; c++){
    Serial.println(c);
    color(c);
    delay(2000);
    digitalWrite(verde, LOW);
    digitalWrite(azul, LOW);
    digitalWrite(rojo, LOW);
	delay(500);
  }
}

void color(int c){
	switch(c){
      case 1: // rojo
      	digitalWrite(rojo, HIGH);
      	digitalWrite(verde, LOW);
      	digitalWrite(azul, LOW);
      break;
      case 2: // verde
      	digitalWrite(rojo, LOW);
      	digitalWrite(verde, HIGH);
      	digitalWrite(azul, LOW);
      break;
      case 3: // azul
      	digitalWrite(rojo, LOW);
      	digitalWrite(verde, LOW);
      	digitalWrite(azul, HIGH);
      break;
      case 4: // amarillo
      	digitalWrite(rojo, HIGH);
      	digitalWrite(verde, HIGH);
      	digitalWrite(azul, LOW);
      break;
      case 5: // violeta
      	digitalWrite(rojo, HIGH);
      	digitalWrite(verde, LOW);
      	digitalWrite(azul, HIGH);
      break;
      case 6: // celeste
      	digitalWrite(rojo, LOW);
      	digitalWrite(verde, HIGH);
      	digitalWrite(azul, HIGH);
      break;
      case 7: // blanco
      	digitalWrite(rojo, HIGH);
      	digitalWrite(verde, HIGH);
      	digitalWrite(azul, HIGH);
      break;
    }
}