#pragma once

#include <vector>
#include <string>
#include <math.h>

using namespace vex;
using namespace std;

class Odometry {

private:
  double encoderLeft;
  double encoderRight;
  double encoderCenter;

  double locationX;
  double locationY;
  double locationTheta;

  double motorLeft;
  double motorRight;

// measure the robot to set this, cm atm
  const double width = 19.4; //6.5, distance from center of bot -> back tracking wheel, does not affect theta calculation
  const double length = 30.3; //14.625, distance between center of left and rigtht wheels
  const double circ = 6.985 * M_PI;


public:
  Odometry();

  // aginst rite side white lane. facing up. (x = 86, y = 8, t = pi/2)
  void reset();

  double getX();
  double getY();
  double getTheta();

  vector<double> getLocation();

  void printLocation();

  void updateOdometry();
};
