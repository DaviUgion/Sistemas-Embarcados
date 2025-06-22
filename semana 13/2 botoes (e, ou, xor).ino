#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botao1 2
#define pin_botao2 3

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
  bool botao1 = digitalRead(pin_botaoA);
  bool botao2 = digitalRead(pin_botaoB);

  if (botao1 == 1 && botao2 == 0) {
    Serial.println("Botão A funcionando");
  }
  if (botao1 == 1 && botao2 == 1) {
    Serial.println("Botão A e B funcionando");
  }
  if (botao1 == 0 && botao2 == 1) {
    Serial.println("Botão B funcionando");
  }
  if ((botao1 == 1) && (botao2 == 1)) {
    digitalWrite(pin_led1, 1);
  } else {
    digitalWrite(pin_led1, 0);
  }
  if ((botao1 == 1) || (botao2 == 1)) {
    digitalWrite(pin_led2, 1);
  } else {
    digitalWrite(pin_led2, 0);
  }
  if ((botao1 == 1) ^ (botao2 == 1)) {
    digitalWrite(pin_led3, 1);
  } else {
    digitalWrite(pin_led3, 0);
  }
}
