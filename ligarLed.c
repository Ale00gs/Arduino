// C++ code
//
void setup()
{
  //indica para o arduino que o pino 10 é uma saída
  pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(10, HIGH); //ligar led
  delay(1000); // esperar 1 segundo (1000ms)
  digitalWrite(10, LOW); //desligar led
  delay(1000); // esperar 1 segundo (1000ms)
}