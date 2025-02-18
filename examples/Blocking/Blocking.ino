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

// Define a stepper and the pins it will use
BasicStepper stepper; // Defaults to BasicStepper::FULL4WIRE (4 pins) on 2, 3, 4, 5

void setup()
{
    stepper.setMaxSpeed(200.0);
    stepper.setAcceleration(100.0);
}

void loop()
{
    stepper.runToNewPosition(0);
    stepper.runToNewPosition(500);
    stepper.runToNewPosition(100);
    stepper.runToNewPosition(120);
}
