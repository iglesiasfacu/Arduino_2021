#define rojo 8
#define verde 9
#define amarillo 10

void setup()
{
  Serial.begin(9600);
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(amarillo, OUTPUT);
}

void loop()
{
  int num = random(0,11);
  Serial.println(num);
 
  if(num==1 || num==3 || num==7){
  	digitalWrite(rojo, HIGH);
    delay(2000);
	digitalWrite(rojo, LOW);
  }
  else if(num==0 || num==2 || num==8){
  	digitalWrite(verde, HIGH);
    delay(2000);
	digitalWrite(verde, LOW);
  }
  else if(num==4 || num==5 || num==9){
  	digitalWrite(amarillo, HIGH);
    delay(2000);
	digitalWrite(amarillo, LOW);
  }
  else{
	digitalWrite(rojo, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(amarillo, LOW);
    delay(2000);
  }

}