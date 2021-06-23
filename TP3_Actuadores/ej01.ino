#include <Servo.h>
  
Servo servo;

void setup(){
  Serial.begin(9600);
  servo.attach(8);
}

void loop(){
  for(int i=0; i<180; i++){
    servo.write(i);
    delay(50);
  }

  for(int i=180; i>0; i--){
    servo.write(i);
    delay(50);
  }
}