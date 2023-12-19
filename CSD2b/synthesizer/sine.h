#include "oscillator.h"

#include <cmath>

class Sine : public Oscillator
{
public:
    Sine();
    ~Sine();

    float calculateSample(float phase);
    const float pi = acos (-1);


};
