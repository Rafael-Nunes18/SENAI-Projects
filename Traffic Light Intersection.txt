#include <Arduino.h>

const int pinLed[8]={13,12,11,7,6,5,4,3};

void setup()
{

  for(int i=0;i<8;i++)
    pinMode(pinLed[i],OUTPUT);
  
  
}
  
  void loop ()
    
{
    
   
    digitalWrite(pinLed[0],HIGH);
    digitalWrite(pinLed[5],HIGH);
    digitalWrite(pinLed[6],HIGH);
    
 
    delay(10000);
    
    
    digitalWrite(pinLed[0],LOW);
    digitalWrite(pinLed[1],HIGH);
    
   
    delay(10000);
    
    
    
    digitalWrite(pinLed[1],LOW); 
    digitalWrite(pinLed[2],HIGH);
    digitalWrite(pinLed[3],HIGH);
    digitalWrite(pinLed[5],LOW);
    
      
    delay(10000);
    
    
    digitalWrite(pinLed[3],LOW);
    digitalWrite(pinLed[4],HIGH);

   
    delay(10000);
    
    
    digitalWrite(pinLed[4],LOW);
    digitalWrite(pinLed[5],HIGH);
    digitalWrite(pinLed[6],LOW);
    digitalWrite(pinLed[7],HIGH);
    
    
    delay(5000);
    
    
    digitalWrite(pinLed[7],LOW);
    digitalWrite(pinLed[5],LOW);
    digitalWrite(pinLed[2],LOW);
    
  
    delay(1000);
    
   

}
    
