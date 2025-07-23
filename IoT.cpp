#include <Arduino.h>
#include <ezTime.h>
#include "WiFi.h"

Timezone time;

void setup() {
    Serial.begin(9600);
    conectaWiFi();
    waitForSync();
    time.setLocation("America/Sao_Paulo");
}

void loop() {
    
    
    checkWiFi();
    Serial.println(time.dateTime());
    Serial.println(time.day()); 
    Serial.println(time.month()); 
    Serial.println(time.year());
    Serial.println(time.yearISO());
    Serial.println(time.dayOfYear());
    Serial.println(time.hour());
    Serial.println(time.minute());
    Serial.println(time.second());
    Serial.println(time.ms());
    Serial.println(time.hourFormat12());
    Serial.println(time.getPosix());
    Serial.println(time.isAM());
    Serial.println(time.isPM());
    Serial.println(time.weekday());
    Serial.println(time.now());
    Serial.println("_____________________");
    delay(5000);

    


}

