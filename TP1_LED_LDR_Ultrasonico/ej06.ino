#define LDR A5

void setup(){
  Serial.begin(9600);
}

void loop(){
  int luz = analogRead(LDR);
  luz = map(luz, 400, 1023, 0, 255);  
  Serial.print("Luminosidad: ");
  Serial.println(luz); 
  delay(1000);
}
