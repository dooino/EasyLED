/*
  EasyLED.h - Library for flashing LEDs.
  Created by Alejandro Dev., February 13, 2017.
  Released into the public domain.
*/
#ifndef EasyLED_h
#define EasyLED_h

#include "Arduino.h"

class EasyLED
{
  public:
    EasyLED(int pin);
    void on();
    void off();
    void blink(int speed, int counter = 10);
    void quickBlink(int counter = 1, int speed = 80);

  private:
    int _pin;
};
#endif
