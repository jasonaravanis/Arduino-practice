#include <Arduino.h>
#include "LED.h"

int delayFactor = 3000;

LED RED(13, 500 + delayFactor, 2000 + delayFactor);

void updateLED(LED led);


void setup() {
    Serial.begin(9600);
    RED.setPreviousMillis(1234);
    Serial.print("Previous millis: ");
    Serial.println(RED.getPreviousMillis());
}

void loop() {
    delay(delayFactor);
    updateLED(RED);
}

void updateLED(LED led) {
    unsigned long currentMillis = millis();
    unsigned long previousMillis = led.getPreviousMillis();
    unsigned long elapsed = currentMillis - previousMillis;

    Serial.print("Current: ");
    Serial.println(currentMillis);
    Serial.print("Previous: ");
    Serial.println(previousMillis);

    if (!led.isOn() && (elapsed >= led.blinkInterval)) {
      led.toggle();
      led.setPreviousMillis(currentMillis);
      return;
    }

    if (led.isOn() && (elapsed >= led.blinkDuration)) {
      led.toggle();
      led.setPreviousMillis(currentMillis);
    }
}