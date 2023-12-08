#include "oscillator.h"
#include <cmath>

class Triangle : public Oscillator
{
public:
    Triangle(float frequency);
    ~Triangle();

    float calculateSample(float phase);


};
