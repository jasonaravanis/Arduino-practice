#include "LED.h"

LED::LED(int p) {
  pin = p;
  pinMode(pin, OUTPUT);
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