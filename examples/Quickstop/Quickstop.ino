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
  stepper.setMaxSpeed(150);
  stepper.setAcceleration(100);
}

void loop()
{    
  stepper.moveTo(500);
  while (stepper.currentPosition() != 300) // Full speed up to 300
    stepper.run();
  stepper.stop(); // Stop as fast as possible: sets new target
  stepper.runToPosition(); 
  // Now stopped after quickstop

  // Now go backwards
  stepper.moveTo(-500);
  while (stepper.currentPosition() != 0) // Full speed basck to 0
    stepper.run();
  stepper.stop(); // Stop as fast as possible: sets new target
  stepper.runToPosition(); 
  // Now stopped after quickstop

}
