#ifndef _OSCILLATOR_H_
#define _OSCILLATOR_H_

#include <cmath>
#include <iostream>

class Oscillator
{
public:
    Oscillator();
    virtual ~Oscillator();

    void setSamplerate(float samplerate);
    float getWaveSample();
    void tick();
    virtual float calculateSample(float phase) = 0;
    void setFrequency(float frequency);
    float getFrequency();

protected:
    float phase;
    float waveSample;

private:
    const float pi = acos(-1);
    float frequency;
    float samplerate;

};

#endif
