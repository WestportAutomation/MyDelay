#include <MyDelay.h>

int TheBigD= 1000;

MyDelay Delay(TheBigD);

void setup() {
Serial.begin(9600);
Serial.println("Start");
}
void loop() {
 if (Delay.Tick()){
  Serial.println("The Delay");
 }
}