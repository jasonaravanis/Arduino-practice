#include <Arduino.h>
#include "LED.h"

LED RED(13, 50, 2000);

unsigned long previousMillis = 0;
unsigned long elapsed = 0;

void setup() {
}

void loop() {

  unsigned long currentMillis = millis();
  elapsed = currentMillis - previousMillis;

  if (!RED.isOn() && (elapsed >= RED.blinkInterval)) {
      RED.on();
      previousMillis = currentMillis;
      elapsed = 0;
    }

  if (RED.isOn() && (elapsed >= RED.blinkDuration)) {
      RED.off();
    }
}




