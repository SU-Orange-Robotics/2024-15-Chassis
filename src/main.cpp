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

void leftDrive(double pow) {
  LeftMotorA.spin(directionType::fwd, pow, velocityUnits::pct);
  LeftMotorB.spin(directionType::fwd, pow, velocityUnits::pct);
  LeftMotorC.spin(directionType::fwd, pow, velocityUnits::pct);
}

void rightDrive(double pow) {
  RightMotorA.spin(directionType::fwd, pow, velocityUnits::pct);
  RightMotorB.spin(directionType::fwd, pow, velocityUnits::pct);
  RightMotorC.spin(directionType::fwd, pow, velocityUnits::pct);
}

void arcadeDrive(double y, double x) {
  x /= 2;
  leftDrive(y + x);
  rightDrive(y - x);
}

void tankDrive(double left, double right) {
  if (abs(left - right) <= 4) { // if the stick inputs are close together, it sends the same value to both sides
    left = (left + right) / 2;
    right = left;
  }

  leftDrive(left);
  rightDrive(right);
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  Odometry();
  Odometry odo;

  int printCounter = 0;

  while(true) {
    float turn = Controller1.Axis4.value();
    //turn /= 100;
    //turn *= abs(turn);
    //turn *= 100;
    arcadeDrive(Controller1.Axis3.value(), turn);
    //tankDrive(Controller1.Axis3.value(), Controller1.Axis2.value());

    odo.updateOdometry();
    
    if(++printCounter % 100 == 0) {
      odo.printLocation();
      //Controller1.Screen.clearScreen(); Controller1.Screen.print("LJoyX: %f", turn);
      printCounter = 0;
    }
    
    wait(10, msec);
  }
  
}
