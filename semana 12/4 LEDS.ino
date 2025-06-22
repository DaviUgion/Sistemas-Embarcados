#define led  2
#define led2  3
#define led3  4
#define led4  5

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop()
{ 
  digitalWrite(led, HIGH); 
  digitalWrite(led3, HIGH);
  delay(1000); 

  digitalWrite(led, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led4, HIGH);
  delay(1000); 
  
  digitalWrite(led2, LOW);
  digitalWrite(led4, LOW);
  
}