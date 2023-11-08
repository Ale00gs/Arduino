// C++ code
//

#define LED 9
#define BOTAO 8

int piscar = 0;

void setup()
{
  Serial.begin(9600); //debugar
  pinMode(BOTAO, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  if(digitalRead(BOTAO)==HIGH)
  {
    piscar = random(1,6); //sorteia um número entre 1 e 6
    Serial.print("NÚMERO: "); //não pula linha
    Serial.println(piscar); 
    for(int i=0; i<piscar;i++)
    {
      digitalWrite(LED,HIGH);
      delay(300);
      digitalWrite(LED,HIGH);
      delay(300);
    }
  }
  delay(20);
}