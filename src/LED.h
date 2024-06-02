#ifndef LED_H
#define LED_H

#include <Arduino.h>

class LED {
  private:
    int pin;

  public:

    LED(int pinNumber, unsigned long blinkDuration, unsigned long blinkInterval);

    unsigned long blinkDuration;

    unsigned long blinkInterval;

    bool isOn();

    void on();

    void off();
};

#endif