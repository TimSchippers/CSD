#ifndef _OSCILLATOR_H_
#define _OSCILLATOR_H_

#include <cmath>

class Oscillator
{
public:
    Oscillator();
    ~Oscillator();

    void setSamplerate(float samplerate);
    float getSample();
    void tick();
    void setFrequency(float frequency);
    float getFrequency();
    float calculateSample(float phase);

protected:
    float sample;
    float phase;
    float waveSample;

private:
    const float pi = acos(-1);
    float frequency;
    float samplerate;

};

#endif
