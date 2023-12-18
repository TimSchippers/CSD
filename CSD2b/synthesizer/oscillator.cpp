#include "oscillator.h"


Oscillator::Oscillator() :
  phase(0), waveSample(0), frequency(220), samplerate(44100)
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
    // std::cout << "debug a" << std::endl;


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

float Oscillator::getWaveSample()
{
    return waveSample;
}
