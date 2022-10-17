#include <Servo.h>
Servo servo;

void setup{
  
}

void loop{
  servo.attach();
  servo.write(0);
}

//--------------------------------------------------------//

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

//#define valorAnalogico A0;
int valorAnalogico = 799;
void setup()
{
  pinMode(2, OUTPUT);
}

void loop()
{
  lcd.setBacklight(HIGH);

  if(valorAnalogico > 0 && valorAnalogico < 400){    
    lcd.init();
    lcd.setCursor(0,0);
    lcd.print("Solo seco");
    delay(1000);
  }
  else if(valorAnalogico > 400 && valorAnalogico < 800){
    lcd.init();
    lcd.setCursor(0,0);
    lcd.print("Solo semi-umido");
    delay(1000);
  }
  else {
    lcd.init();
    lcd.setCursor(0,0);
    lcd.print("Solo umido");
    delay(1000);
  }
}
