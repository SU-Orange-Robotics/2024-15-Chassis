#include "vex.h"
#include "robot-config.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor LeftMotorA = motor(PORT15, ratio18_1, true);
motor LeftMotorB = motor(PORT16, ratio18_1, false);
motor RightMotorA = motor(PORT11, ratio18_1, true);
motor RightMotorB = motor(PORT12, ratio18_1, false);

controller Controller1 = controller(primary);
rotation RightRotation = rotation(PORT14, true);
rotation LeftRotation = rotation(PORT13, false);
inertial Inertial11 = inertial(PORT11);


motor WingMotorLeft = motor(PORT8, ratio18_1, true);
motor WingMotorRight = motor(PORT20, ratio18_1, false);

gps GPS = gps(PORT9);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}