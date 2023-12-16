#include "oscillator.h"


class Saw : public Oscillator
{
public:
    Saw();
    ~Saw();

    float calculateSample(float phase);


};
