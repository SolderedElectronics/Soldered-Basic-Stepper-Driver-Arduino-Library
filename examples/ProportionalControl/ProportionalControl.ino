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

// This defines the analog input pin for reading the control voltage
// Tested with a 10k linear pot between 5v and GND
#define ANALOG_IN A0

void setup()
{
    stepper.setMaxSpeed(1000);
}

void loop()
{
    // Read new position
    int analog_in = analogRead(ANALOG_IN);
    stepper.moveTo(analog_in);
    stepper.setSpeed(100);
    stepper.runSpeedToPosition();
}
