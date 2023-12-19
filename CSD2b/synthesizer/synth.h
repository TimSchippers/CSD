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
    virtual void tick() = 0; //tick has a different method with each sub class
    void setSamplerate(float samplerate);
    void setFrequency(float midiNote);
    float getOutput();
    virtual void setChoice(int choiceIndex) = 0;

protected:
    float mtof(float midiNote); //converses midi notes to frequencies (credit to Mark Groenewegen)
    float samplerate;
    float sample;
    long sampleStep; // to calculate the runtime
    float sampleStepSize;
    float frequency;
    float output; //master volume
    int numOscillators;

    std::vector<Oscillator*> oscillators; //pointer vector so the size of the Oscillator bank is variable (Coen gave me the tip for a vector)


};

#endif
