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
// RightRotation        rotation      14              
// LeftRotation         rotation      13              
// Inertial11           inertial      11              
// ---- END VEXCODE CONFIGURED DEVICES ----
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
// RightRotation        rotation      14              
// LeftRotation         rotation      13              
// Inertial11           inertial      11              
// ---- END VEXCODE CONFIGURED DEVICES ----
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
// RightRotation        rotation      14              
// LeftRotation         rotation      13              
// Inertial11           inertial      11              
// ---- END VEXCODE CONFIGURED DEVICES ----
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
// RightRotation        rotation      14              
// LeftRotation         rotation      13              
// Inertial11           inertial      11              
// ---- END VEXCODE CONFIGURED DEVICES ----
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
// RightRotation        rotation      14              
// LeftRotation         rotation      13              
// Inertial11           inertial      11              
// ---- END VEXCODE CONFIGURED DEVICES ----
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
// RightRotation        rotation      14              
// LeftRotation         rotation      13              
// Inertial11           inertial      11              
// ---- END VEXCODE CONFIGURED DEVICES ----
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
// Rotation14           rotation      14              
// LeftRotation         rotation      13              
// Inertial11           inertial      11              
// ---- END VEXCODE CONFIGURED DEVICES ----
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
// Rotation14           rotation      14              
// Rotation13           rotation      13              
// Inertial11           inertial      11              
// ---- END VEXCODE CONFIGURED DEVICES ----
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
// Rotation14           rotation      14              
// Rotation13           rotation      13              
// ---- END VEXCODE CONFIGURED DEVICES ----
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
// Rotation11           rotation      11              
// Rotation13           rotation      13              
// ---- END VEXCODE CONFIGURED DEVICES ----
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
// Rotation11           rotation      11              
// ---- END VEXCODE CONFIGURED DEVICES ----
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
#include "odometry.h"
#include <iostream>

using namespace vex;
using namespace std;

void leftDrive(double y, double x) {
  LeftMotorA.spin(directionType::fwd, x+y, velocityUnits::pct);
  LeftMotorB.spin(directionType::fwd, x+y, velocityUnits::pct);
  LeftMotorC.spin(directionType::fwd, x+y, velocityUnits::pct);
}

void rightDrive(double y, double x) {
  RightMotorA.spin(directionType::fwd, y-x, velocityUnits::pct);
  RightMotorB.spin(directionType::fwd, y-x, velocityUnits::pct);
  RightMotorC.spin(directionType::fwd, y-x, velocityUnits::pct);
}

void drive(double y, double x) {
  leftDrive(y, x);
  rightDrive(y, x);
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  Odometry();
  Odometry odo;

  while(true) {
    float turn = Controller1.Axis4.value();
    //turn /= 100;
    //turn *= abs(turn);
    //turn *= 100;
    drive(Controller1.Axis3.value(), turn);
    wait(10, msec);
    odo.printLocation();
    odo.updateOdometry();

  }
  
}
