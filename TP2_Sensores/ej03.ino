#define LDR A5
#define led 8

void setup(){
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop(){
  int luz = analogRead(LDR);
  luz = map(luz, 400, 1024, 0, 255);  
  Serial.print("Luminosidad: ");
  Serial.println(luz); 
  delay(1000);
  if (luz > 200){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
  delay(733);
}
