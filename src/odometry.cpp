#include "vex.h"
using namespace vex;


#include "odometry.h"
#include "iostream"

using namespace std;

Odometry::Odometry() {
  reset();
}

void Odometry::reset() {
  locationX = 0.0;
  locationY = 0.0;
  locationTheta = M_PI / 2;

  encoderLeft = 0.0;
  encoderRight = 0.0;
  encoderCenter = 0.0;

  motorLeft = 0.0;
  motorRight = 0.0;

  LeftRotation.resetPosition();
  RightRotation.resetPosition();
  // Center.resetPosition() = 0;
}

double Odometry::getX() {
  return locationX;
}

double Odometry::getY() {
  return locationY;
}

double Odometry::getTheta() {
  return locationTheta;
}

vector<double> Odometry::getLocation() {
  return { locationX, locationY, locationTheta };
}

void Odometry::printLocation() {
  // ==== Brain Printout ===
  // Brain.Screen.clearScreen(); 
  
  // Brain.Screen.setCursor(1, 1);
  // Brain.Screen.print("X: %f", locationX);

  // // Display the Y position on row 2
  // Brain.Screen.newLine();
  // Brain.Screen.print("Y: %f", locationY);

  // // Display the Z position on row 3
  // Brain.Screen.newLine();
  // Brain.Screen.print("Theta: %f", locationTheta);

  Controller1.Screen.setCursor(0,0);
  Controller1.Screen.clearScreen();
  
  Controller1.Screen.setCursor(1, 1);
  Controller1.Screen.print("X: %.2f ", locationX);

  // Display the Y position on row 2
  // Controller1.Screen.newLine();
  Controller1.Screen.print("Y: %.2f ", locationY);

  // Display the Z position on row 3
  // Controller1.Screen.newLine();
  Controller1.Screen.print("T: %.2f", locationTheta);

  Controller1.Screen.newLine();
  Controller1.Screen.print("EL: %.3f", encoderLeft);
  Controller1.Screen.print("ER: %.3f", encoderRight);
  Controller1.Screen.newLine();
  Controller1.Screen.print("ML: %.3f", motorLeft);
  Controller1.Screen.print("MR: %.3f", motorRight);
}

void Odometry::updateOdometry() {
  // 1. get new encoder readings

  // Check if values should be reversed
  double newEncoderLeft = LeftRotation.position(turns);
  double newEncoderRight = RightRotation.position(turns);
  double newEncoderCenter = 0; // Center.position(turns);


  double diffLeft = newEncoderLeft - encoderLeft;
  double diffRight = newEncoderRight - encoderRight;
  double diffCenter = 0;

  // overwrite old values
  encoderLeft = newEncoderLeft;
  encoderRight = newEncoderRight;
  motorLeft = LeftMotorA.position(turns);
  motorRight = RightMotorA.position(turns);
  // encoderCenter = newEncoderCenter;

  // 2. calculate delta u

  // 3. calculate delta x,y,theta
  double dx = circ * (diffRight + diffLeft) / 2;
  double dy = circ * (diffCenter - (diffRight - diffLeft) * (width / length));
  double dt = circ * (diffRight - diffLeft) / length;

  // 4. use trig to calculate new location x,y,theta
  double newTheta = locationTheta + (dt / 2.0);
  locationX += dx * cos(newTheta) - dy * sin(newTheta);
  locationY += dx * sin(newTheta) + dy * cos(newTheta);
  locationTheta += dt;
  if (locationTheta > 2 * M_PI) {
    locationTheta -= 2 * M_PI;
  }
  else if (locationTheta < 0) {
    locationTheta += 2 * M_PI;
  }
}