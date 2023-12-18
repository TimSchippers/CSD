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
