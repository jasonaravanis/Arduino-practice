#ifndef LED_H
#define LED_H

#include <Arduino.h>

class LED {
  private:
    int pin;
    int previousMillis;

  public:

    LED(int pinNumber, unsigned long blinkDuration, unsigned long blinkInterval);

    unsigned long blinkDuration;

    unsigned long blinkInterval;

    bool isOn();

    void on();

    void off();

    void toggle();

    void setPreviousMillis(unsigned long millis);

    unsigned long getPreviousMillis();
};

#endif