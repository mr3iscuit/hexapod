#include <Servo.h>
#include <IRremote.hpp>
#define delayValue 1000
// 3, 5, 6, 8, 10, 11 (servo)
/*
Servo upperLeft1, upperLeft2, upperLeft3;
Servo bottomLeft1, bottomLeft2, bottomLeft3;
Servo lowerLeft1, lowerLeft2, lowerLeft3;

Servo upperRight1, upperRight2, upperRight3;
Servo bottomRight1, bottomRight2, bottomRight3;
Servo lowerRight1, lowerRight2, lowerRight3;
*/

Servo group1Upper;


void setup() {
  group1Upper.attach(3);
  group1Upper.write(90);

  delay(1000);
}

void loop() {
  group1Upper.write(0);
  delay(delayValue);
  group1Upper.write(180);
  delay(delayValue);
}
