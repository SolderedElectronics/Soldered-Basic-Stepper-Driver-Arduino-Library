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
    // Change these to suit your stepper if you want
    stepper.setMaxSpeed(100);
    stepper.setAcceleration(20);
    stepper.moveTo(500);
}

void loop()
{
    // If at the end of travel go to the other end
    if (stepper.distanceToGo() == 0)
        stepper.moveTo(-stepper.currentPosition());

    stepper.run();
}
