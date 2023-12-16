#include "oscillator.h"
#include <iostream>

Oscillator::Oscillator() :
  sample(0), phase(0), waveSample(0), frequency(220), samplerate(44100)
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
    waveSample = sin(pi*2*phase);
    sample = waveSample;

}


void Oscillator::setSamplerate(float samplerate)
{
    this->samplerate=samplerate;
}

void Oscillator::setFrequency(float frequency)
{
    this->frequency = frequency;
}

float Oscillator::getFrequency()
{
    return frequency;
}

float Oscillator::getSample()
{
    return sample;
}
