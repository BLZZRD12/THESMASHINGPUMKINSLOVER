#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor leftMotorA = motor(PORT1, ratio18_1, true);
motor leftMotorB = motor(PORT2, ratio18_1, true);
motor leftMotorC = motor(PORT14, ratio18_1,true);
motor_group LeftDriveSmart = motor_group(leftMotorA, leftMotorB, leftMotorC);
motor rightMotorA = motor(PORT10, ratio18_1, false);
motor rightMotorB = motor(PORT9, ratio18_1, false);
motor rightMotorC = motor(PORT20, ratio18_1,false);
motor_group RightDriveSmart = motor_group(rightMotorA, rightMotorB, rightMotorC);
inertial DrivetrainInertial = inertial(PORT5);
controller Controller1 = controller(primary);
// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}