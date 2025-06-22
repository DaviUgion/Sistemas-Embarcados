#define pin_led1 8          
#define pin_led2 9      
#define pin_led3 10          
#define pin_led4 11        
#define pin_botao 2

void setup() {
  pinMode(pin_led1, OUTPUT);       
  pinMode(pin_led2, OUTPUT);        
  pinMode(pin_led3, OUTPUT);      
  pinMode(pin_led4, OUTPUT);        
  pinMode(pin_botao, INPUT);

}

void loop() {
  bool estado = digitalRead(pin_botao);
  if (estado == 1) {
    digitalWrite(pin_led1, HIGH);
  } else{
    digitalWrite(pin_led1, LOW);
  }
}
