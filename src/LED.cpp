#include "LED.h"

LED::LED(int p, unsigned long d, unsigned long i) {
  pin = p;
  pinMode(pin, OUTPUT);
  blinkDuration = d;
  blinkInterval = i;
  previousMillis = 0;
}

bool LED::isOn() {
    return digitalRead(pin);
}

void LED::on() {
  digitalWrite(pin, HIGH);
}

void LED::off() {
  digitalWrite(pin, LOW);
}

void LED::toggle() {
    digitalWrite(pin, this->isOn() ? LOW : HIGH);
}

void LED::setPreviousMillis(unsigned long millis) {
    this->previousMillis = millis;
}

unsigned long LED::getPreviousMillis() {
    return previousMillis;
}