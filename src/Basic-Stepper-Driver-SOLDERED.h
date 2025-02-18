/**
 **************************************************
 *
 * @file        Basic-Stepper-Driver-SOLDERED.h
 * @brief       Header file for stepper driver
 *
 * @copyright GNU General Public License v3.0
 * @authors     @ soldered.com
 ***************************************************/

#ifndef __STEPPER_DRIVER__
#define __STEPPER_DRIVER__

#include "Arduino.h"
#include "libs/AccelStepper/src/AccelStepper.h"

class BasicStepper : public AccelStepper
{
  public:
    // Default constructor (uses AccelStepper defaults)
    BasicStepper() : AccelStepper(AccelStepper::FULL4WIRE, 2, 3, 4, 5, true)
    {
    }

    // Constructor matching AccelStepper's standard constructor
    BasicStepper(uint8_t interface, uint8_t pin1, uint8_t pin2, uint8_t pin3 = 0, uint8_t pin4 = 0, bool enable = true)
        : AccelStepper(interface, pin1, pin2, pin3, pin4, enable)
    {
    }

    // Alternate constructor for function pointer-based stepping (forward/backward function callbacks)
    BasicStepper(void (*forward)(), void (*backward)()) : AccelStepper(forward, backward)
    {
    }
};

#endif
