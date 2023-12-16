#include "synth.h"

Synthesizer::Synthesizer(float samplerate) : sampleStep(0),samplerate(samplerate),sample(0),phase(0),frequency(220)
{
    sampleStepSize = 1 / samplerate;
}

Synthesizer::~Synthesizer()
{

}

void Synthesizer::tick()
{
    sampleStep += sampleStepSize;
    //TODO Calculate sample
    phase += frequency / samplerate;
    if(phase > 1.0f) {
        phase -= 1.0f;
    }
    sample = sin(pi*2*phase);
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
