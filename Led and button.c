#include <Arduino.h>

const int LED = 13;
const int Button = 10;
bool stateButton;

void setup()
{
  pinMode(Button,INPUT);
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
  
  
}

void loop()
{
 stateButton = digitalRead(Button);
 Serial.println(stateButton);
 digitalWrite(LED,stateButton);

  
  
  
}
