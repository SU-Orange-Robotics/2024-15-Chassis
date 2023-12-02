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
#include "gps.h"

using namespace vex;
using namespace std;

// A global instance of competition
competition Competition;

// define your global instances of motors and other devices here

void stop() {
  LeftMotorA.stop(brake);
  LeftMotorB.stop(brake);
  RightMotorA.stop(brake);
  RightMotorB.stop(brake);
}

void leftDrive(double pow) {
  LeftMotorA.spin(directionType::fwd, pow, velocityUnits::pct);
  LeftMotorB.spin(directionType::fwd, pow, velocityUnits::pct);
}

void rightDrive(double pow) {
  RightMotorA.spin(directionType::fwd, pow, velocityUnits::pct);
  RightMotorB.spin(directionType::fwd, pow, velocityUnits::pct);
}

void arcadeDrive(double y, double x) {
  x /= 2;
  leftDrive(y + x);
  rightDrive(y - x);
}

void tankDrive(double left, double right) {

  if (abs(left) == 0 && abs(right) == 0) {
    stop();
    return;
  }

  if (abs(left - right) <= 20) { // if the stick inputs are close together, it sends the same value to both sides
    left = (left + right) / 2;
    right = left;
  }

  leftDrive(-left);
  rightDrive(-right);
}

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the V5 has been powered on and        */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton(void) {

  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void autonomous(void) {
  // ..........................................................................
  // Insert autonomous user code here.
  // ..........................................................................
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void usercontrol(void) {
  float reverseFlag = false;
  while(1) {
    float turn = Controller1.Axis4.value();
    //turn /= 100;
    //turn *= abs(turn);
    //turn *= 100;
    //arcadeDrive(Controller1.Axis3.value(), turn);
    reverseFlag = Controller1.ButtonL1.pressing();
    
    if (reverseFlag){
      tankDrive(-Controller1.Axis2.value(), -Controller1.Axis3.value());
    }
    else{
      tankDrive(Controller1.Axis3.value(), Controller1.Axis2.value());
    }


    WingMotorLeft.spin(directionType::fwd, Controller1.ButtonA.pressing() ? -50 : 0, velocityUnits::pct);
    WingMotorRight.spin(directionType::fwd, Controller1.ButtonA.pressing() ? -50 : 0, velocityUnits::pct);

    // odo.updateOdometry();
    
    wait(10, msec);
  }
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  Odometry();
  Odometry odo;
  // pre_auton();
  // Competition.autonomous(autonomous);
  // Competition.drivercontrol(usercontrol);

  Controller1.Screen.print("hello");

  int printCounter = 0;

  usercontrol(); // enter usercontrol loop
  }