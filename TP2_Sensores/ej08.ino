#define sw 8
#define led 9
int contador = 1;

void setup(){
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(sw, INPUT_PULLUP);
}

void loop(){
  int tilt = digitalRead(sw);
  Serial.print("Valor del Tilt: ");
  Serial.println(tilt);
  
  if (contador < 10){
    if (tilt == 1){
      Serial.print("Parpadeo: ");
  	  Serial.println(contador);
      Serial.println();
 
      digitalWrite(led, HIGH);
      delay(500);
      digitalWrite(led, LOW);
      delay(500);
      contador++;
    }
    else{
   	  Serial.println("El ciclo se ha detenido");
      delay(2000);
    }
  }
  else{
  	Serial.println();
  	Serial.println("Ciclo reiniciado");
  	contador = 1;
  }
}
 
  