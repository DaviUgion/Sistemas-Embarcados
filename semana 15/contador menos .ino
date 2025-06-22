#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botao1 2
#define pin_botao2 3

int conta = 0
int aux = 0;
int aux1 = 0;

void setup() {
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botao1, INPUT);
  pinMode(pin_botao2, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool botao1 = digitalRead(pin_botao1);
  bool botao2 = digitalRead(pin_botao2);
  Serial.println(conta);
  
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
}