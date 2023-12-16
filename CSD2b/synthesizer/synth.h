#include "oscillator.h"
#include <cmath>

class Synthesizer
{
public:
    Synthesizer(float samplerate);
    ~Synthesizer();
    void tick();
    void setSamplerate(float samplerate);
    float getOutput();

private:
    float samplerate;
    float sample;
    long sampleStep;
    float sampleStepSize;
    float frequency;
    //float volume;
    float output;
    int numOscillators;

    Oscillator* oscillators[];

    float mtof(float midiNote);

};
