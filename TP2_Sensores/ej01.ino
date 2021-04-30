#define trig 8
#define echo 9
#define led 10

void setup(){
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led, OUTPUT);
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
  
  if(cm < 5){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
}