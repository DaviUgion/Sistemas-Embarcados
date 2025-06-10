#define led1 8
#define led2 9
#define led3 10
#define led4 11
#define botaoA 2
#define botaoB 3

int cont = 0;
bool aux = 0;
int limiteA = 50;
int limiteB = 0;


void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(botaoA, INPUT);
  pinMode(botaoB, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool botao1 = digitalRead(botaoA);
  bool botao2 = digitalRead(botaoB);
  // valor pernace entre 0 e 50, se estiver 0 led 1 liga, se estiver 50 o led 2 liga e 1 desliga
  if (botao1 == 1) {
    if ((aux == 0) && (cont < 50)) {
      cont++;
      aux = 1;
    }
  } else {
    aux = 0;
  }
  Serial.println(cont);
  if (botao2 == 1) {
    if ((aux == 0) && (cont > 0 )) {
      cont--;
      aux = 1;
    }
  } else {
    aux = 0;
  }
  Serial.println(cont);
}
