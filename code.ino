#define pino_sinal_analogico A0
int valor_analogico;

#include <Servo.h>
Servo servo;

void setup(){
  Serial.begin(9600);
  pinMode(pino_sinal_analogico, INPUT);
  servo.attach();
  servo.write(0);
}

void loop(){
  valor_analogico = analogRead(pino_sinal_analogico);
  Serial.print(valor_analogico);

  if(valor_analogico >= 800){
    servo.write(180);
  }
}
