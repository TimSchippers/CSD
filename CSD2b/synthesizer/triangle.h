#include "oscillator.h"


class Triangle : public Oscillator
{
public:
    Triangle();
    ~Triangle();

    float calculateSample(float phase);
    void testWatErGebeurt();


};
