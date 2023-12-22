#include "synth.h"

class AdditiveSynth : public Synthesizer
{
public:
    AdditiveSynth(float samplerate, int series);
    ~AdditiveSynth();

    void tick();
    void setChoice(int series);
    int series;
    float multiplier;
    float offset = 0;
};
