#include "oscillator.h"
#include <cmath>

class Saw : public Oscillator
{
public:
    Saw(float frequency);
    ~Saw();

    float calculateSample(float phase);


};
