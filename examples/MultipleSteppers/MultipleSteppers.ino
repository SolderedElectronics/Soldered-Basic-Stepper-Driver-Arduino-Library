/**
 **************************************************
 *
 * @file        Template.ino
 * @brief
 *
 *
 *
 * @authors     Robert @ soldered.com
 ***************************************************/

#include "Basic-Stepper-Driver-SOLDERED.h"

// Define some steppers and the pins the will use
BasicStepper stepper1; // Defaults to BasicStepper::FULL4WIRE (4 pins) on 2, 3, 4, 5
BasicStepper stepper2(BasicStepper::FULL4WIRE, 6, 7, 8, 9);
BasicStepper stepper3(BasicStepper::FULL2WIRE, 10, 11);

void setup()
{
    stepper1.setMaxSpeed(200.0);
    stepper1.setAcceleration(100.0);
    stepper1.moveTo(24);

    stepper2.setMaxSpeed(300.0);
    stepper2.setAcceleration(100.0);
    stepper2.moveTo(1000000);

    stepper3.setMaxSpeed(300.0);
    stepper3.setAcceleration(100.0);
    stepper3.moveTo(1000000);
}

void loop()
{
    // Change direction at the limits
    if (stepper1.distanceToGo() == 0)
        stepper1.moveTo(-stepper1.currentPosition());
    stepper1.run();
    stepper2.run();
    stepper3.run();
}
