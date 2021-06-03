#define pir 10
#define rojo 8
#define azul 9

void setup(){
  Serial.begin(9600);
  pinMode(pir, INPUT);
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
}

void loop(){
  int valor = digitalRead(pir);
  Serial.println(valor);
  
  if (valor == HIGH){
    digitalWrite(rojo, HIGH);
    delay(50);
    digitalWrite(azul, LOW);
    delay(50);
  }
  else{
    digitalWrite(rojo, LOW);
    delay(50);
    digitalWrite(azul, HIGH);
    delay(50);
  }
}