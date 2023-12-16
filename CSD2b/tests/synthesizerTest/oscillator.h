#ifndef _OSCILLATOR_H_
#define _OSCILLATOR_H_

class Oscillator
{
public:
    Oscillator(float frequency);
    ~Oscillator();

    void setSamplerate(float samplerate);
    float getSample();
    void tick();
    float getFrequency();
    virtual float calculateSample(float phase) = 0;

protected:
    float sample;
    float phase;
    float waveSample;

private:
    float amplitude;
    float frequency;
    float samplerate;

};

#endif
