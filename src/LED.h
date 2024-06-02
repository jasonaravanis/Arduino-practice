#ifndef LED_H
#define LED_H

#include <Arduino.h>

class LED {
  private:
    int pin;

  public:
    LED(int p);

    bool isOn();

    void on();

    void off();
};

#endif