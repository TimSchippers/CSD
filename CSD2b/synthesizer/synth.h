#ifndef _SYNTH_H_
#define _SYNTH_H_

#include "oscillator.h"
#include "triangle.h"
#include "sine.h"
#include "saw.h"

#include <cmath>

class Synthesizer
{
public:
    Synthesizer(float samplerate);
    virtual ~Synthesizer();
    virtual void tick() = 0;
    void setSamplerate(float samplerate);
    void setFrequency(float midiNote);
    float getOutput();

protected:
    float mtof(float midiNote);
    float samplerate;
    float sample;
    long sampleStep;
    float sampleStepSize;
    float frequency;
    //float volume;
    float output;
    int numOscillators;

    std::vector<Oscillator*> oscillators; //Coen gave me the tip for a vector


};

#endif
