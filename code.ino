#include <Servo.h>
Servo s;

const int pinoServo = 6;
const int pinoSensor = 3;

void setup(){
  Serial.begin(9600);
  pinMode(pinoSensor, INPUT);

  s.attach(pinoServo);
  s.write(0);
}
 
void loop(){
  if(digitalRead(pinoSensor) == HIGH){
      Serial.write("Seco\n");
      s.write(0);
  }else{
    Serial.write("Molhado\n");
    s.write(55);
  }
  delay(1000);
}
