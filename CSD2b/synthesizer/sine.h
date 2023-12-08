#include "oscillator.h"
#include <cmath>

class Sine : public Oscillator
{
public:
    Sine(float frequency);
    ~Sine();

    float calculateSample(float phase);
    const float pi = acos (-1);


};
