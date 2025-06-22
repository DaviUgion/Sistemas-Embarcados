#define pin_botao1 2
#define pin_botao2 3

int conta = 0;
int aux = 0;
int aux1 = 0;
int limite = 50;

void setup() {
  pinMode(pin_botao1, INPUT);
  pinMode(pin_botao2, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool botao1 = digitalRead(pin_botaoA);
  bool botao2 = digitalRead(pin_botaoB);

  if (botao1 == 1) {
    if (aux == 0) {
      conta++;
      aux = 1;
    }
  } else {
    aux = 0;
  }

  if (botao2 == 1) {
    if (aux1 == 0) {
      conta--;
      aux1 = 1;
    }
  } else {
    aux1 = 0;
  }

  if (conta >= limite) {
    Serial.println("Limite atingido.");
  } else {
    Serial.println(conta);
  }

}
