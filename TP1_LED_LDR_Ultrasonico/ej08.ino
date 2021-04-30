#define LDR A5
#define rojo 8
#define azul 9
#define verde 10

void setup(){
  Serial.begin(9600);
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop(){
  int luz = analogRead(LDR);
  Serial.print("Luminosidad: ");
  Serial.println(luz); 
  delay(1000);
  analogWrite(rojo, luz);
  analogWrite(azul, luz);
  analogWrite(verde, luz);
}