#include "gps.h"
#include "iostream"

using namespace vex;
using namespace std;

// constructor, not tested
Gps::Gps(){
    gps(20);
    printf("Works");
}

// not tested, weird implementation of vex::gps probably
void Gps::getLocation() {
    gps gpsTest(20);
    xPosition = gpsTest.xPosition();
    yPosition = gpsTest.yPosition();
    angle = gpsTest.heading();
}

// work in progress
void Gps::printLocation(){
    Controller1.Screen.clearScreen();

    // maybe merge code with getLocation() and have it take a boolean value if you 
    // want it to print to the screen?
    Controller1.Screen.print(Gps::xPosition);
}





