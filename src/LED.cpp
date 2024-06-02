#include "LED.h"

LED::LED(int p, unsigned long d, unsigned long i) {
  pin = p;
  pinMode(pin, OUTPUT);
  blinkDuration = d;
  blinkInterval = i;
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