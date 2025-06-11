#include <Arduino.h>
#include "BluetoothSerial.h"

#define pinLed 2



BluetoothSerial SerialBT;


String Word = " ";


void setup() {
  
Serial.begin(9600);
SerialBT.begin("ESPRafael");
Serial.println("type something in the Serial Monitor");
pinMode(pinLed, OUTPUT);

}

void loop() 
{
 while(SerialBT.available())
{
 char caractere = Serial.read();
 if(caractere == '\n')
{
 Serial.println(Word);
 if(Word.equals("ON"))
  {
 digitalWrite(pinLed, HIGH);
  }
 else if(Word.equals("OFF"))
  {
 digitalWrite(pinLed, LOW);
  }
 else{
 Serial.println("command not recognized");
  }
 Word = " ";
}
 else if(caractere != '\n')
{
 Word += caractere;
}
 if(caractere== 'L')
{
 digitalWrite(pinLed, HIGH);
 Serial.println("Led on");
}
 else if(caractere== 'D')
{
 digitalWrite(pinLed, LOW);
 Serial.println("Led off");
}
else
{
 Serial.println("just type L or D");
 Serial.printf("you typed the %c\n\r", caractere);
}

}
}


