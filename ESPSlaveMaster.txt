#include <Arduino.h>
#include "BluetoothSerial.h"

#define pinLED 2
BluetoothSerial SerialBT;

//ESP Master
void setup()
{
  Serial.begin(9600);
  SerialBT.begin("ESPMaster", true);

if(SerialBT.connect("ESPSlave"))
{
  Serial.println("Conected the device with sucesfully");
}
else
{
Serial.println("connection is fail");
while(true); 

}

}
void loop(){
  SerialBT.print("ping");
  Serial.println("sending a message");

unsigned long timeout = millis() + 1000;
while(millis() < timeout)
{
  if(SerialBT.available())
{
String answer = SerialBT.readStringUntil('\r');
Serial.printf("Message received: %s", answer);
break;
}

}

}

















//ESP Slave
void setup() {
  Serial.begin(9600);  
  SerialBT.begin("ESPSlave", false);  
  Serial.println("waiting Bluetooth connection...");
  
}
void loop() {
if(SerialBT.available())
 {
  String mensagem = SerialBT.readStringUntil('\r');
  
Serial.printf("mensagem recebida: %s\n\r", message);
Serial.printf("mensagem enviada: pong \n\r", message);
  if(message.equals("ping"))
    {
    SerialBT.print("pong\n\r");
  }
  if(mensagem.equals("message recebida"))
  {
   digitalWrite(pinLED,HIGH);
  }
 }
}
