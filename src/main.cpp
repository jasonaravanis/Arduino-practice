#include <Arduino.h>
#include "LED.h"


// A bar is 2000ms
LED RED(13, 100, 2000); // Blink once per bar
LED GREEN(12, 100, 1000); // Blink twice per bar
LED BLUE(11, 100, 500); // Blink four times per bar

void updateLED(LED& led);


void setup() {
    Serial.begin(9600);
}

void loop() {
    updateLED(RED);
    updateLED(GREEN);
    updateLED(BLUE);
}

void updateLED(LED &led) {

    unsigned long previousMillis = led.getPreviousMillis();

    if (!led.isOn() && (millis() - previousMillis >= led.blinkInterval)) {
      led.setPreviousMillis(millis());
      led.toggle();
      return;
    }

    if (led.isOn() && (millis() - previousMillis >= led.blinkDuration)) {
      led.toggle();
    }
}