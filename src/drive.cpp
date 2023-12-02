#include "drive.h"


void Drive::toggleInvertedDrive() {
  invertedDrive = !invertedDrive;
}

Drive::Drive() {
  invertedDrive = false;
}


//  ====== Drive Functions ======
void Drive::stop() {
  LeftMotorA.stop(brake);
  LeftMotorB.stop(brake);
  RightMotorA.stop(brake);
  RightMotorB.stop(brake);
}

void Drive::leftDrive(double pow) {
  LeftMotorA.spin(directionType::fwd, pow, velocityUnits::pct);
  LeftMotorB.spin(directionType::fwd, pow, velocityUnits::pct);
}

void Drive::rightDrive(double pow) {
  RightMotorA.spin(directionType::fwd, pow, velocityUnits::pct);
  RightMotorB.spin(directionType::fwd, pow, velocityUnits::pct);
}

void Drive::tankDrive(double left, double right) {
  if (abs(left) == 0 && abs(right) == 0) {
    stop();
    return;
  }

  if (invertedDrive) {
    left *= -1;
    right *= -1;
    double tmp = left;
    left = right;
    right = tmp;
  }

  if (abs(left - right) <= 20) { // if the stick inputs are close together, it sends the same value to both sides
    left = (left + right) / 2;
    right = left;
  }

  leftDrive(-left);
  rightDrive(-right);
}

bool Drive::getToggleStatus() {
  return invertedDrive;
}


// ===== for autonomous =====
void Drive::driveForwardForTime(double time) {
  leftDrive(-80);
  rightDrive(-80);

  this_thread::sleep_for(1000);
}

void Drive::driveBackwardForTime(double time) {
  leftDrive(80);
  rightDrive(80);

  this_thread::sleep_for(1000);
}

void Drive::slowTurnRight(){
  leftDrive(-20);
  rightDrive(20);
}

void Drive::slowTurnLeft(){
  leftDrive(20);
  rightDrive(-20);
}

void Drive::driveForwardWithSpeed(double speed) {
  leftDrive(-speed);
  rightDrive(-speed);
}