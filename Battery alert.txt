#include <Arduino.h>
#define pinLed 13

int battery = 40;

void setup()
{
  pinMode(pinLed 13, OUTPUT);
  
  if(battery <80 & battery >20)
    digitalWrite(pinLed,HIGH);

  else if(bateria >80 || battery <20)
    digitalWrite(pinLed, LOW);
  
  
}
  
 void loop ()
 {
    
    


 }
