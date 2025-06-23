#define led1 8 
#define botao1 2 

bool estadoled = false;
unsigned long tempo_anterior = 0;
const long intervalo = 500;
bool botaoprecionado = false;



void setup() {
  pinMode(led1, OUTPUT);
  pinMode(botao1, INPUT_PULLUP); 
}
void loop() {
  if (digitalRead(botao1) == LOW && !botaoprecionado) { 
    botaoprecionado = true;
    estadoled = !estadoled; 
  } else if (digitalRead(botao1) == HIGH) {
    botaoprecionado = false; 
  }
  if (estadoled) {
    unsigned long tempo_atual = millis();
    if (tempo_atual - tempo_anterior >= intervalo) {
      tempo_anterior = tempo_atual;
      digitalWrite(led1, !digitalRead(led1)); 
    }
  } else {
    digitalWrite(led1, LOW); 
  }
}
