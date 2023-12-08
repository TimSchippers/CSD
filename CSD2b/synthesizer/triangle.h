#include "oscillator.h"


class Triangle : public Oscillator
{
public:
    Triangle(float frequency);
    ~Triangle();

    float calculateSample(float phase);


};
