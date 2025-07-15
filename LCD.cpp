#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C LCD(0x27, 16, 2);



void setup() 
{
 LCD.init();
 LCD.backlight();
 LCD.setCursor(2,0);
 LCD.print("Hello World!");
 LCD.setCursor(2,1);
 LCD.print("------------");
  
  
  
}


void loop() 
{ 




}
