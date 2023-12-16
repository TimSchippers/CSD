#include "synth.h"


Synthesizer::Synthesizer(float samplerate) : samplerate(samplerate), sample(0), sampleStep(0), frequency(440), numOscillators(3)
{
    std::cout << "Synth Constructor" << std::endl ;
    sampleStepSize = 1 / samplerate;
    for (int i = 0; i < numOscillators; i++)
    {
        oscillators[i] = new Triangle;
    }
}

Synthesizer::~Synthesizer()
{
    std::cout << "Synth deconstructor" << std::endl ;
    for (int i = 0; i < numOscillators; i++)
    {
        delete oscillators[i];
    }
}

void Synthesizer::tick()
{
    sampleStep += sampleStepSize;
    for (int i = 0; i < numOscillators; i++)
    {
        oscillators[i]->setFrequency(mtof(60));
        sample += oscillators[i]->getWaveSample() ;
        oscillators[i]->tick();
    }
    sample /= numOscillators + 1;
    //TODO Calculate envelope
    output = sample;
}

float Synthesizer::getOutput()
{
    return output;
}

void Synthesizer::setSamplerate(float samplerate)
{
    this->samplerate = samplerate;
}

float Synthesizer::mtof(float midiNote)
{
    frequency = 440.f * pow(2.f, (midiNote - 69.0f) / 12.0f);
    return frequency;
}
