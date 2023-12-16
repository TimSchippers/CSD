#include "oscillator.h"
#include <iostream>

Oscillator::Oscillator(float frequency) :
  sample(0), phase(0), waveSample(0), amplitude(1.0), frequency(frequency)
{
    std::cout << "Oscillator Constructor" << std::endl ;
}

Oscillator::~Oscillator()
{
    std::cout << "Oscillator Deconstructor" << std::endl ;
}

void Oscillator::tick()
{
    phase += frequency / samplerate;
    if(phase > 1.0f) {
      phase -= 1.0f;
    }
    waveSample = calculateSample(phase);
    sample = waveSample * amplitude;

}


void Oscillator::setSamplerate(float samplerate)
{
    this->samplerate=samplerate;
}


float Oscillator::getFrequency()
{
    return frequency;
}

float Oscillator::getSample()
{
    return sample;
}
