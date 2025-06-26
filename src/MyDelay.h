
#ifndef MyDelay_H
#define MyDelay_H
#include <Arduino.h>

class MyDelay {

  private:
  
    unsigned long _DelayPeriod;
    unsigned long _PresentTime;
    unsigned long _PreviousTime;
    unsigned long _HalfPreviousTime;

  public:

    MyDelay(unsigned long DelayPeriod);

    bool Tick();
    bool Half_Tick();
};
#endif
