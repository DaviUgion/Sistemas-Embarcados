#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botaoA 2
#define pin_botaoB 3

//CORREÇÃO DO ULTIMO EXERCICIO 4
void setup() {
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botaoA, INPUT);
  pinMode(pin_botaoB, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool botaoA = digitalRead(pin_botaoA);
  bool botaoB = digitalRead(pin_botaoB);
  // testando os botoes
  if (botaoA == 1){
    Serial.println("botaoA apertado");
  }
  if (botaoB == 1){
    Serial.println("botaoB apertado");
  }

  if ((botaoA == 1) && (botaoB == 1)) {
    digitalWrite(pin_led1, 1);
  } else {
    digitalWrite(pin_led1, 0);
  }
  if ((botaoA == 1) || (botaoB == 1)) {
    digitalWrite(pin_led2, 1);
  } else {
    digitalWrite(pin_led2, 0);
  }
  if ((botaoA == 1) ^ (botaoB == 1)) {
    digitalWrite(pin_led3, 1);
  } else {
    digitalWrite(pin_led3, 0);
  }
}
