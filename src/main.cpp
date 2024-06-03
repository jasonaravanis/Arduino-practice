#include <Arduino.h>
#include "LED.h"

LED RED(13, 100, 2000);
LED GREEN(12, 100, 1000);

void updateLED(LED& led);


void setup() {
    Serial.begin(9600);
}

void loop() {
    updateLED(RED);
    updateLED(GREEN);
}

void updateLED(LED &led) {

    unsigned long previousMillis = led.getPreviousMillis();

    if (!led.isOn() && (millis() - previousMillis >= led.blinkInterval)) {
      led.setPreviousMillis(millis());
      led.toggle();
      return;
    }

    if (led.isOn() && (millis() - previousMillis >= led.blinkDuration)) {
      led.setPreviousMillis(millis());
      led.toggle();
    }
}