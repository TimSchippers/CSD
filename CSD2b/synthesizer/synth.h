
#include "oscillator.h"
#include "triangle.h"
#include <cmath>

class Synthesizer
{
public:
    Synthesizer(float samplerate);
    ~Synthesizer();
    void tick();
    void setSamplerate(float samplerate);
    float getOutput();

protected:
    float samplerate;
    float sample;
    long sampleStep;
    float sampleStepSize;
    float frequency;
    //float volume;
    float output;
    int numOscillators;

    std::vector<Oscillator*> oscillators; //Coen gave me the tip for a vector

    float mtof(float midiNote);

};
