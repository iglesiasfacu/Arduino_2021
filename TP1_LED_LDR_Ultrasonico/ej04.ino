#define led 7

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop()
{
  float valor = analogRead(0);
  valor = map(valor, 0, 1023, 0, 255);
  Serial.println(valor);
  analogWrite(led, valor);
}