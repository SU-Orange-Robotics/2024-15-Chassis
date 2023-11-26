#include "gps.h"

using namespace vex;
using namespace std;

// constructor, not tested
Gps::Gps() : xPosition(0.0), yPosition(0.0), heading(0.0) {}

// not tested, weird implementation of vex::gps probably
void Gps::updateLocation() {
    xPosition = GpsSensor.xPosition();
    yPosition = GpsSensor.yPosition();
    heading = GpsSensor.heading();
}

// work in progress
void Gps::printLocation(){
    Controller1.Screen.clearScreen();

    // maybe merge code with getLocation() and have it take a boolean value if you 
    // want it to print to the screen?
    Controller1.Screen.print("GPS_X: %.2f ", xPosition);
    Controller1.Screen.newLine();
    Controller1.Screen.print("GPS_Y: %.2f ", yPosition);
    Controller1.Screen.newLine();
    Controller1.Screen.print("GPS_Heading: %.2f ", heading);
}





