#define led1 = 2;
#define led2 = 3;
#define led3 = 4;
#define led4 = 5;

unsigned long tempoAnterior = 0;
int estadoAtual = 0;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(led4, OUTPUT);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(led4, LOW);
}

void loop() {
  unsigned long tempoAtual = millis();
  if (estadoAtual == 0) {
    digitalWrite(led1, HIGH);
    tempoAnterior = tempoAtual;  
    estadoAtual = 1;             
  }
  if (estadoAtual == 1) {  
    if (tempoAtual - tempoAnterior >= 125) {
      digitalWrite(led2, HIGH);
      tempoAnterior = tempoAtual;
      estadoAtual = 2;
    }
  }
  if (estadoAtual == 2) {  
    if (tempoAtual - tempoAnterior >= 250) {
      digitalWrite(LED3, HIGH);
      tempoAnterior = tempoAtual;
      estadoAtual = 3;
    }
  }
  if (estadoAtual == 3) { 
    if (tempoAtual - tempoAnterior >= 500) {
      digitalWrite(led4, HIGH);
      tempoAnterior = tempoAtual;
      estadoAtual = 4;
    }
  }
  if (estadoAtual == 4) {  
    if (tempoAtual - tempoAnterior >= 500) {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(LED3, LOW);
      digitalWrite(led4, LOW);
      tempoAnterior = tempoAtual;
      estadoAtual = 0;  
    }
  }
}