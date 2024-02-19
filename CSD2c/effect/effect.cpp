#include "effect.h"
#include <iostream>

Effect::Effect() {
    setDryWet(0.5);
}

Effect::~Effect() {}

void Effect::processFrame(float input)
{
    float output = applyEffect(input);
    output *= wetVolume;
    output += input * dryVolume;
};
