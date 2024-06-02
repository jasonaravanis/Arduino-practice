#include <Arduino.h>

const int ledPin1 = 12;
const int blinkDuration = 100;
const int blinkInterval = 2000;
unsigned long previousMillis = 0;
bool ledState = LOW;
int elapsed = 0;

void setup() {
  pinMode(ledPin1, OUTPUT);
}

void loop() {

  unsigned long currentMillis = millis();
  elapsed = currentMillis - previousMillis;

  if (ledState == LOW && elapsed >= blinkInterval) {
      ledState = HIGH;
      digitalWrite(ledPin1, ledState);
      previousMillis = currentMillis;
    }

  if (ledState == HIGH && currentMillis - previousMillis >= blinkDuration) {
      ledState = LOW;
      digitalWrite(ledPin1, ledState);
    }
}










