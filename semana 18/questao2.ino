#define pin_led1 2
#define pin_led2 3
#define pin_led3 4
#define pin_botao 10
#define pin_botao2 11
#define pin_botao3 12
int count = 0;// variavel para saber quantas vagas ja foram liberadas
//definição dos boteos e pinos para os leds 
void setup() {
pinMode(pin_led1, OUTPUT);
pinMode(pin_led2, OUTPUT);
pinMode(pin_botao, INPUT);
pinMode(pin_botao2, INPUT);
pinMode(pin_botao3, INPUT);
//definindo leds como saida e botoes como entrada

}

void loop() {
bool lib = (digitalRead(pin_botao)); // criando a variavel para vagas livres
bool lot = (digitalRead(pin_botao2)); // criando a variavel para vagas ocupadas
bool zer = (digitalRead(pin_botao3)); // variavel criada para zerar a contagem do count
if (lib == 1){//ligara o led um caso precionado pra sinalizar a liberação de uma vaga
  digitalWrite(pin_led1, HIGH);
count +=1 ;//caso uma vaga seja liberada, aumentara em 1 o numero do count
}
else{
  digitalWrite(pin_led1, LOW);
}
if (lot == 1){//ligara o led 2 caso precionado para sinalizar que uma vaga esta ocupada
 digitalWrite(pin_led2, HIGH);
 count -=1;//caso uma vaga for ocupada, diminuira em 1 o numero do count
}
else{
  digitalWrite(pin_led2, LOW);
}
if (count == 10){//assim que o count estiver em 10, significa que todas as vagas estão livres 
  digitalWrite(pin_led3, HIGH);
}
else{
  digitalWrite(pin_led3, LOW);
}
if (zer == 1); //assim que o botao 3 for precionado ele ira rezetar a contagem do count
count = 0;
}

