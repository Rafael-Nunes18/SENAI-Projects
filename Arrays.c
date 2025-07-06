#include <Arduino.h>

int pinLeds[5] = {2,3,4,5,6};
int i;


void setup()
{
  for(i=0;i<5;i++)
pinMode(pinLeds[i],OUTPUT);


}




void loop()
{
  for(i=0;i<5;i++)
  digitalWrite(pinLeds[i],HIGH);
  delay(1000);
  
  for(i=0;i<5;i++)
  digitalWrite(pinLeds[i],LOW);
  delay(1000);
  
  
  
  
  
}

