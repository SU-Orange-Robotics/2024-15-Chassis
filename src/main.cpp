/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       zhuowz                                                    */
/*    Created:      Fri Sep 08 2023                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// LeftMotorA           motor         1               
// LeftMotorB           motor         2               
// LeftMotorC           motor         3               
// RightMotorA          motor         6               
// RightMotorB          motor         7               
// RightMotorC          motor         8               
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include <cmath>

using namespace vex;

void leftDrive(double y, double x) {
  LeftMotorA.spin(forward, x+y, velocityUnits::pct);
  LeftMotorB.spin(forward, x+y, velocityUnits::pct);
  LeftMotorC.spin(forward, x+y, velocityUnits::pct);
}

void rightDrive(double y, double x) {
  RightMotorA.spin(forward, y-x, velocityUnits::pct);
  RightMotorB.spin(forward, y-x, velocityUnits::pct);
  RightMotorC.spin(forward, y-x, velocityUnits::pct);
}

void drive(double y, double x) {
  leftDrive(y, x);
  rightDrive(y, x);
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  while(true) {
    float turn = Controller1.Axis4.value();
    //turn /= 100;
    //turn *= abs(turn);
    //turn *= 100;
    drive(Controller1.Axis3.value(), turn);
    wait(10, msec);
  }
  
}
