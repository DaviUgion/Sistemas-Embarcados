#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botao1 2
#define pin_botao2 3
#define pin_botao3 4

void setup() {
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botao1, INPUT);
  pinMode(pin_botao2, INPUT);
  pinMode(pin_botao3, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool rua1 = digitalRead(pin_botao1);
  bool rua2 = digitalRead(pin_botao2);


  if ((rua1 == 1) && (rua2 == 1)) {
    digitalWrite(pin_led1, 1);
    digitalWrite(pin_led2, 0);
  } else {
    digitalWrite(pin_led1, 0);
    digitalWrite(pin_led2, 0);
  }
  if ((rua1 == 1) && (rua2 == 0)) {
    digitalWrite(pin_led1, 1);
    digitalWrite(pin_led2, 0);
  } else {
    digitalWrite(pin_led1, 0);
    digitalWrite(pin_led2, 0);
  }
  if ((rua1 == 0) && (rua2 == 1)) {
    digitalWrite(pin_led1, 1);
    digitalWrite(pin_led2, 0);
  } else {
    digitalWrite(pin_led2, 0);  
}
}