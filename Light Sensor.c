#include <Arduino.h>
#define pinLed 18 
#define pinSensor 4


void setup() {
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);
  

}

void loop() {
  int sensorLDR = analogRead(pinSensor);
  Serial.println(sensorLDR);
  delay(2000);
  if(sensorLDR>50)
  digitalWrite(pinLed, LOW);
  
  else
   digitalWrite(pinLed, HIGH);
  


}
