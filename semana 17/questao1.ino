#define pin_led1 2
#define pin_led2 3
#define pin_led3 4
#define pin_botao 10
#define pin_botao2 11
#define pin_botao3 12
//definicao dos pinos e botoes

void setup() {
      digitalWrite(pin_led1, OUTPUT);
      digitalWrite(pin_led2, OUTPUT);
      digitalWrite(pin_led3, OUTPUT);
      digitalWrite(pin_botao, INPUT);
      digitalWrite(pin_botao2, INPUT);
      digitalWrite(pin_botao3, INPUT);
// aqui esta definido com os leds sendo de saida e os botoes de entrada
}

void loop() {
bool botao1 =(digitalRead(pin_botao));
bool botao2 =(digitalRead(pin_botao2));
bool botao3 =(digitalRead(pin_botao3));
//criando as variaveis para os tres botoes 
if (botao1 == 1){//ligara o botao 1 caso precionado 
  digitalWrite(pin_led1, HIGH);
}
else{// desligara o botao 1 caso desprecionado
    digitalWrite(pin_led1, LOW);
}
if (botao2 == 1){//ligara o botao 2 caso precionado
  digitalWrite(pin_led2, HIGH);
}
else{//desligara o botao 2 caso desprecionado
  digitalWrite(pin_led2, LOW);
}
if (botao3 == 1){//ligar o botao 3 caso precionado
  digitalWrite(pin_led3, HIGH);
}
else{//desligara o botao 3 caso desprecionado
    digitalWrite(pin_led3, LOW);
}
}
