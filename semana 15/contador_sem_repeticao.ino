#define pin_botao1 2
#define pin_botao2 3

int cont = 0;
int tic1 = 0;
int tic2 = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  bool botao1 = digitalRead(pin_botao1);
  bool botao2 = digitalRead(pin_botao2);

  Serial.println(cont);
 if (botao1 == 1 && tic1 == 0) {
    cont += 1;
    tic1 += 1;
  }
  if (botao1 == 0) {
    tic1 = 0;
  } 
  if (botao2 == 1 && tic2 == 0) {
    cont -= 1;
    tic2 += 1;
  }
  if (botao2 == 0) {
    tic2 = 0;
  }
}