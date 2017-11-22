/*
  EasyLED.h - Library for flashing LEDs.
  Created by Alejandro Dev., February 13, 2017.
  Released into the public domain.
*/
#include "Arduino.h"
#include "EasyLED.h"

#define _on 1
#define _off 0

EasyLED::EasyLED(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void EasyLED::on()
{
  digitalWrite(_pin, _on);
}

void EasyLED::off()
{
  digitalWrite(_pin, _off);
}

void EasyLED::blink(int speed, int counter)
{
  while(counter--) {
    off();
    delay(speed);
    on();
    delay(speed);
  }
}

void EasyLED::quickBlink(int counter, int speed)
{
  blink(speed, counter);
}
