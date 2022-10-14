#include <Servo.h>
Servo servo;

void setup{
  
}

void loop{
  servo.attach();
  servo.write(0);
}
