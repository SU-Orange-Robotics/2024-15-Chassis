#include "vex.h"

using namespace vex;
using namespace std;

class Gps {
    private:
        double xPosition;
        double yPosition;
        double heading;

    public:
        Gps();
        void updateLocation();
        void printLocation();
};

