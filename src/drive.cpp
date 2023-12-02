#include "drive.h"


void Drive::toggleInvertedDrive() {
  invertedDrive = !invertedDrive;
  // if (invertedDrive == true) {
  //   invertedDrive = false;
  // } else {
  //   invertedDrive = true;
  // }
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


//