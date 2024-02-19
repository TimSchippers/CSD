
#include "waveshaper.h"
#include <cmath>

Waveshaper::Waveshaper(float intensity) : intensity(intensity) {}

Waveshaper::~Waveshaper() {}

void Waveshaper::setIntensity(float intensity)
{
    this->intensity = intensity;
}

float Waveshaper::applyEffect(float sample)
{
    float output = atan(sample * intensity) / atan(intensity);
    return output;
}
