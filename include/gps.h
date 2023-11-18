#include "vex.h"

using namespace vex;
using namespace std;

class Gps {
    private:
        double xPosition;
        double yPosition;
        double angle;

    public:
        Gps();

        void getLocation();

        void printLocation();
};

