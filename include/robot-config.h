using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor LeftMotorA;
extern motor LeftMotorB;
extern motor LeftMotorC;
extern motor RightMotorA;
extern motor RightMotorB;
extern motor RightMotorC;
extern controller Controller1;
extern rotation RightRotation;
extern rotation LeftRotation;
extern inertial Inertial11;

extern motor WingMotorLeft;
extern motor WingMotorRight;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );