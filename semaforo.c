// C++ code

 //DECLARAÇÃO DOS PINOS
  int LED_VERDE = 8;
  int LED_AMARELO = 9;
  int LED_VERMELHO = 10;
  
void setup()
{
  //APRESENTAÇÃO DOS MODOS DOS PINOS
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);

  //INICIALIZAÇÃO DOS PINOS DESLIGADOS
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, LOW);
} 

void loop()
{
  //ACENDE O VERDE
  digitalWrite(LED_VERDE, HIGH);
  //ESPERA 10S
  delay(1000); 
  //APAGA O VERDE E ACENDE O AMARELO
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, HIGH);
  //ESPERA 2S
  delay(2000);
  //APAGA O AMARELO E ACENDE O VERMELHO
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, HIGH);
  //ESPERA 5S
  delay(1000);
  //APAGA O VERMELHO
  digitalWrite(LED_VERMELHO, LOW);
}