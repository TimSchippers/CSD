#pragma once

#include "effect.h"

class Delay : public Effect
{
public:
    Delay();
    ~Delay();

    void prepare(float sampleRate) override;
    void write(float input);
    float read();

    void setReadH();
    void setDelayTIme();
    void setMaxDelayTime(int milliseconds);

private:
    float* buffer;
    int readH;
    int writeH;
    int size;
    int numSamplesDelay;
    float output;

    float applyEffect(float sample) override;
};
