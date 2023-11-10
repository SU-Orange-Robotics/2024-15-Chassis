#include "vex.h"
#include <cmath>
#include <iostream>
#include <chrono>

#include "odometry.h"
#include "unique_thread.h"

void doSomething() {
   const int id = rand() % 100;
   for (int i = 0; i < 4; i++) {
      std::cout << "Hello from thread id=" << id << std::endl;
      this_thread::sleep_for(std::chrono::milliseconds(1000));
   }
}

using namespace vex;
using namespace std;

void leftDrive(double y, double x) {
  LeftMotorA.spin(directionType::fwd, y + x/2, velocityUnits::pct);
  LeftMotorB.spin(directionType::fwd, y + x/2, velocityUnits::pct);
  LeftMotorC.spin(directionType::fwd, y + x/2, velocityUnits::pct);
}

void rightDrive(double y, double x) {
  RightMotorA.spin(directionType::fwd, y - x/2, velocityUnits::pct);
  RightMotorB.spin(directionType::fwd, y - x/2, velocityUnits::pct);
  RightMotorC.spin(directionType::fwd, y - x/2, velocityUnits::pct);
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

  int printCounter = 0;

  while(true) {
    float turn = Controller1.Axis4.value();
    //turn /= 100;
    //turn *= abs(turn);
    //turn *= 100;
    drive(Controller1.Axis3.value(), turn);
    odo.updateOdometry();
    
    if(++printCounter % 100 == 0) {
      odo.printLocation();
      printCounter = 0;
    }
    
    wait(10, msec);
  }
  
}
