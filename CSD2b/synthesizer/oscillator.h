#ifndef _OSCILLATOR_H_
#define _OSCILLATOR_H_

#include <cmath>
#include <iostream>

class Oscillator
{
public:
    Oscillator();
    virtual ~Oscillator();

    void tick(); //calcculates the next sample
    virtual float calculateSample(float phase) = 0; //every oscillator sub class has a different calculation
    void setSamplerate(float samplerate);
    float getWaveSample();
    void setFrequency(float frequency);
    float getFrequency();

protected:
    float phase;
    float waveSample;

private:
    float frequency;
    float samplerate;

};

#endif
