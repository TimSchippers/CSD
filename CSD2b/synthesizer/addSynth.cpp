#include "addSynth.h"

AdditiveSynth::AdditiveSynth(float samplerate) : Synthesizer(samplerate)
{
    this->numOscillators = 10;
    std::cout << "AdditiveSynth Constructor" << std::endl;
    for (int i = 0; i < numOscillators; i++)
    {
        oscillators.push_back(new Sine);
    };
}

AdditiveSynth::~AdditiveSynth()
{
    std::cout << "AdditiveSynth Deconstructor" << std::endl;
}

void AdditiveSynth::tick()
{
    sample = 0;
    sampleStep += sampleStepSize;
    std::cout << "capacity = " << oscillators.capacity() << " size = " << oscillators.size() << std::endl;
    for (int i = 0; i < numOscillators; i++)
    {
        oscillators[i]->setFrequency(110+(i*150));
        sample += (oscillators[i]->getWaveSample())/(i+1.0f) ;
        oscillators[i]->tick();
    }
        std::cout << sample << std::endl;
    // sample /= numOscillators;
    //TODO Calculate envelope
    output = sample;
}
