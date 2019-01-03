#include <Stepper.h>
const int stepsPerRevolution = 200;
Stepper myStepper(stepsPerRevolution, 8,9,10,11);
void setup() {
  myStepper.setSpeed(1001);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  Serial.println("counterclockwise");
  myStepper.step(stepsPerRevolution);
  delay(10);
  // put your main code here, to run repeatedly:

}
