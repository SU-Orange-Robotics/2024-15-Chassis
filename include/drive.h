#include "vex.h"

#pragma once

class Drive {
private:

  bool invertedDrive;


public:

  Drive();

  void toggleInvertedDrive();
  void tankDrive(double left, double right);
  bool getToggleStatus();

  void stop();
  void leftDrive(double pow);
  void rightDrive(double pow);

  // autonomous code 
  void driveForwardForTime(double time);
  void driveForwardWithSpeed(double speed);

  void driveBackwardForTime(double time);

  void slowTurnRight();
  void slowTurnLeft();

};