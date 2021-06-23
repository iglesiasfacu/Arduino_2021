#include <Servo.h>
#define pote A0

Servo servo;

void setup(){
  Serial.begin(9600);
  servo.attach(8);
  pinMode(pote, INPUT);
}

void loop(){
  long valorpote = analogRead(pote);
  valor = map(valorpote, 0, 1023, 1, 181);
  servo.write(valor);
  delay(1500);
}