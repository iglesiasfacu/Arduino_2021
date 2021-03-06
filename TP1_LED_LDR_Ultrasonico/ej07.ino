#define trig 8
#define echo 9

void setup(){
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop(){
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
}