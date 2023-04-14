#include <Servo.h>
#include <IRremote.hpp>
#define delayValue 1000

#define UPPER1_PIN 3
#define MIDDLE1_PIN 5

unsigned int currentMillis;
unsigned int previousMillis;

int group1UpperValue = 90;
int group1MiddleValue = 180;
bool tactFlag = false;

// 3, 5, 6, 8, 10, 11 (servo)
/*
Servo upperLeft1, upperLeft2, upperLeft3;
Servo middleLeft1, middleLeft2, middleLeft3;
Servo lowerLeft1, lowerLeft2, lowerLeft3;

Servo upperRight1, upperRight2, upperRight3;
Servo middleRight1, middleRight2, middleRight3;
Servo lowerRight1, lowerRight2, lowerRight3;
*/
Servo group1Upper, group1Middle;
void setup() {
  group1Upper.attach(UPPER1_PIN);
  group1Middle.attach(MIDDLE1_PIN);

  
  group1Upper.write(90);
  group1Middle.write(90);

  delay(500);
}

void updateValue() {
  group1Upper.write(group1UpperValue);
}

void goForward() {
  if(tactFlag) group1UpperValue++;
  else group1UpperValue--;
  if(group1UpperValue <= 0) tactFlag = true;
  else if(group1UpperValue >= 180) tactFlag = false;

  group1Middle.write(group1MiddleValue);
}

void turnLeft() {
  
}

void turnRight() {

}


void loop() {
  updateValue();
  goForward();
  delay(5);
}
