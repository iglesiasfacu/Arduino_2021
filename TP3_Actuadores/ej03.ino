#include <Servo.h>
Servo servo;
int cont = 0;

void setup(){
  Serial.begin(9600);
  motor.attach(8);
}

void loop(){
  	int num = random(0,180);
	servo.write(num);
  	cont ++;
  	Serial.print("Grados:");
  	Serial.println(num);
  	if (cont==3){
      Serial.println(num);
      Serial.println("Moviendo a 0 grados");
      servo.write(0);
      delay(1500);
      Serial.println("Moviendo a 180 grados");
      servo.write(180);
      delay(1500);
      Serial.println("Moviendo a 90 grados");
      servo.write(90);
      delay(1500);
      cont=0;
    }
  	delay(1500);
}