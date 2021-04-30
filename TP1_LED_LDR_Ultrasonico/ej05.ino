#define rojo 8
#define azul 9
#define verde 10

void setup()
{
  Serial.begin(9600);
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop()
{
  int valor = analogRead(0);
  valor = map(valor, 0, 1023, 0, 255);
  Serial.println(valor);
 
  if(valor < 36){ //rojo
    digitalWrite(rojo, HIGH);
    digitalWrite(verde, LOW);
    digitalWrite(azul, LOW);
  }
  else if(valor < 72){ //verde
    digitalWrite(rojo, LOW);
    digitalWrite(verde, HIGH);
    digitalWrite(azul, LOW);
  }
  else if(valor < 108){ //azul
    digitalWrite(rojo, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(azul, HIGH);
  }
  else if(valor < 144){ //amarillo
    digitalWrite(rojo, HIGH);
    digitalWrite(verde, HIGH);
    digitalWrite(azul, LOW);
  }
  else if(valor < 180){ //violeta
    digitalWrite(rojo, HIGH);
    digitalWrite(verde, LOW);
    digitalWrite(azul, HIGH);
  }
  else if(valor < 216){ //celeste
    digitalWrite(rojo, LOW);
    digitalWrite(verde, HIGH);
    digitalWrite(azul, HIGH);
  }
  else{ //blanco
    digitalWrite(rojo, HIGH);
    digitalWrite(verde, HIGH);
    digitalWrite(azul, HIGH);
  }
}
