#include <Arduino.h>
#define LDR_PIN A0

void setup() {
    Serial.begin(9600);
    pinMode(LDR_PIN,INPUT);
    Serial.println("LDR test");

}

void loop() {
    int ldrRaw = analogRead(LDR_PIN);
    int lightpercent=map(ldrRaw,0,1023,0,100);
    Serial.print("LDR RAW: ");
    Serial.println(ldrRaw);
    Serial.print("Light percent: ");
    Serial.println(lightpercent);
    Serial.print("%");
    delay(500);

}