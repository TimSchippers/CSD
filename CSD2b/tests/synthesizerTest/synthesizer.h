#include "oscillator.h"

class Synthesizer
{
public:
    Synthesizer();
    ~Synthesizer();
    float getSample();
    void setSamplerate();
    void tick();
};
