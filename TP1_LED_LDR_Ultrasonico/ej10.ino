#define trig 8
#define echo 9
#define rojo 12
#define azul 11
#define verde 10

void setup()
{
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT); 
}

void loop()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(5);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  int duration = pulseIn(echo, HIGH);

  double cm = duration*0.034/2;
  Serial.print("Distancia: ");
  Serial.print(cm);
  Serial.println(" cm");
  delay(250);

  if(cm < 5){ // rojo
    analogWrite(rojo, 255);
  }
  else if(cm < 10){ // anaranjado
    analogWrite(rojo, 255);
    analogWrite(verde, 30);
  }
  else if(cm < 25){ // amarillo
    analogWrite(rojo, 255);
    analogWrite(verde, 255);
  }
  else{
    analogWrite(rojo, 0);
    analogWrite(verde, 0);
  }

}
