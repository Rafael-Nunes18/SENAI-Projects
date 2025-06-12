#include <Arduino.h>
#define pinLed 13


void setup()
{
int temperature = 20;

pinMode(pinLed, OUTPUT);
  
  
  if(temperature>30)
    digitalWrite(pinLed, HIGH);
    
    
 
   else
     digitalWrite(pinLed, LOW);
     
}
 
void loop ()
{


  
  
  
  
  
  
  
  
  
 }
