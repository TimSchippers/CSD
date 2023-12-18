#include "synth.h"


Synthesizer::Synthesizer(float samplerate) : samplerate(samplerate), sample(0), sampleStep(0), frequency(220)
{
    std::cout << "Synth Constructor" << std::endl ;
    // sampleStepSize = 1 / samplerate;
    // for (int i = 0; i < numOscillators; i++)
    // {
    //     oscillators.push_back(new Triangle);
    // };
}

Synthesizer::~Synthesizer()
{
    std::cout << "Synth deconstructor" << std::endl ;
    for (int i = 0; i < numOscillators; i++)
    {
        delete oscillators[i];
    }
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
