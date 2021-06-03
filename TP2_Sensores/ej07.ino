#define flex A0
#define rojo 8
#define verde 9

void setup(){
    Serial.begin(9600);
    pinMode(rojo, OUTPUT);
  	pinMode(verde, OUTPUT);
}

void loop(){
  int led_rojo = analogRead(flex);
  int led_verde = map(led_rojo, 600, 1024, 0, 255);
  Serial.print("Valor led rojo: ");
  Serial.println(led_rojo);
  Serial.print("Valor led verde: ");
  Serial.println(led_verde);
  analogWrite(rojo, led_rojo);
  analogWrite(verde, led_verde);
  delay(200); 
}
