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
  luz = map(luz, 400, 1024, 0, 255); 
  Serial.print("Luminosidad: ");
  Serial.println(luz); 
  analogWrite(rojo, luz);
  analogWrite(azul, luz);
  delay(100);
}