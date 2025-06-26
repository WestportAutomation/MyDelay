#include "MyDelay.h"

MyDelay::MyDelay(unsigned long DelayPeriod){
    _DelayPeriod = DelayPeriod;
}
bool MyDelay::Tick(){
    _PresentTime = millis() - _PreviousTime;

  if (_PresentTime >= _DelayPeriod) {
    _PreviousTime = millis();
    return true;
  }
  else {
    return false;
  }
}

bool MyDelay::Half_Tick() {
    _PresentTime = millis() - _HalfPreviousTime;

    if (_PresentTime >= (_DelayPeriod/2)) {
         _HalfPreviousTime = millis();
        return true;
    }
    else {
        return false;
    }
}