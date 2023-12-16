#include "synth.h"
#include "oscillator.h"

Synthesizer::Synthesizer(float samplerate) : samplerate(samplerate), sample(0), sampleStep(0), frequency(220), numOscillators(3)
{
    sampleStepSize = 1 / samplerate;
    for (int i = 0; i < numOscillators; i++)
    {
        oscillators[i] = new Oscillator;
    }
}

Synthesizer::~Synthesizer()
{

}

void Synthesizer::tick()
{
    sampleStep += sampleStepSize;
    for (int i = 0; i < numOscillators; i++)
    {
        oscillators[i]->setFrequency(frequency * pow(2,i));
        sample += oscillators[i]->getSample() ;
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
