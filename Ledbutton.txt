#include <Arduino.h>
#define pinLed 15
#define pinButton 22

int count = 0;

void setup()
{
  pinMode(pinLed, OUTPUT);
  pinMode(pinButton, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{

  bool CurrentStatebutton = analogRead(pinButton);
  static bool stateLed;
  static bool previousStatebutton;
  if (CurrentStatebutton == 1 && previousStatebutton == 0)
  {

    stateLed = !stateLed;
    digitalWrite(pinLed, stateLed);
    count++;
    Serial.println(count);
  }
  previousStatebutton = CurrentStatebutton;
}
