#include "simpleSynth.h"

SimpleSynth::SimpleSynth(float samplerate) : Synthesizer(samplerate)
{
    this->numOscillators = 5;
    std::cout << "SimpleSynth Constructor" << std::endl;
    for (int i = 0; i < numOscillators; i++)
    {
        oscillators.push_back(new Triangle);
    };
}

SimpleSynth::~SimpleSynth()
{
    std::cout << "SimpleSynth Deconstructor" << std::endl;
}

void SimpleSynth::tick()
{
    sampleStep += sampleStepSize;
    // std::cout << "capacity = " << oscillators.capacity() << " size = " << oscillators.size() << std::endl;
    for (int i = 0; i < numOscillators; i++)
    {
        oscillators[i]->setFrequency(i*detune+frequency);
        sample += oscillators[i]->getWaveSample() ;
        oscillators[i]->tick();
        // std::cout << "IK BEN IN DE LOOP MET I ; "<< i << std::endl;
    }
    sample /= numOscillators;
    //TODO Calculate envelope
    output = sample;
}
