#define trig 8
#define echo 9
#define buzzer 10
long cm, distancia;

void setup(){
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT);
  digitalWrite(trig, LOW);
}

void loop(){
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  distancia = pulseIn(echo, HIGH);
  cm = distancia*0.034/2;
  
  if(cm>=2 && cm<6){
    tone(buzzer, 500);
    delay(250);
    noTone(buzzer);
    delay(250);
  }
  else if(cm>=6 && cm<12){
    tone(buzzer, 500);
    delay(500);
    noTone(buzzer);
    delay(500);
  }
  else if(cm>=12 && cm<20){
    tone(buzzer, 500);
    delay(1000);
    noTone(buzzer);
    delay(1000);
  }
  else if(cm>=20 && cm<=30){
    tone(buzzer, 500);
    delay(1500);
    noTone(buzzer);
    delay(1500);
  }
  else{
    noTone(buzzer);
  }
} 