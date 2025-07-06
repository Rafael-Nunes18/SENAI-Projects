#include <Arduino.h>
#define pinLed 12
#define timeflash 300


void setup ()
{
  
 
  pinMode (pinLed, OUTPUT); 
    
}

void loop() 
{
 digitalWrite(pinLed, HIGH); 
  delay(timeflash);
  digitalWrite(pinLED, LOW);
  delay(timeflash);
}
  
