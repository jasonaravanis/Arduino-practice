#include <Arduino.h>
#include "LED.h"

LED RED(13);

// const int RED = 13;
const int GREEN = 12;

const int RED_DURATION = 100;
const int RED_INTERVAL = 2000;

unsigned long previousMillis = 0;
bool ledState = LOW;
int elapsed = 0;

void setup() {
}

void loop() {

  unsigned long currentMillis = millis();
  elapsed = currentMillis - previousMillis;

  if (!RED.isOn() && elapsed >= RED_INTERVAL) {
      RED.on();
      previousMillis = currentMillis;
    }

  if (RED.isOn() && currentMillis - previousMillis >= RED_DURATION) {
      RED.off();
    }
}




