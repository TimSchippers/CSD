#include "addSynth.h"

AdditiveSynth::AdditiveSynth(float samplerate,int series) : Synthesizer(samplerate)
{
    this->numOscillators = 10; //size of the oscillatorbank
    // std::cout << "AdditiveSynth Constructor" << std::endl;
    if (series == 0)
    {
        this->multiplier = 1;
    }
    else if (series == 1)
    {
        this->multiplier = 2;
    }
    else if (series == 3)
    {
        this->multiplier = 2;
        this->offset = 1;
    }
    for (int i = 0; i < numOscillators; i++)
    {
        oscillators.push_back(new Sine); //adds a new sine oscillator in the Oscillator bank
    };
}

AdditiveSynth::~AdditiveSynth()
{
    // std::cout << "AdditiveSynth Deconstructor" << std::endl;
}

void AdditiveSynth::tick()
{
    sample = 0;
    sampleStep += sampleStepSize;
    for (int i = 0; i < numOscillators; i++)
    {
        oscillators[i]->setFrequency(frequency+((frequency*i*multiplier)-offset)); // sets the frequency for every oscillator
        sample += (oscillators[i]->getWaveSample())/(i+1.0f) ; // calculates the wave sample with every next harmonic halve the amplitude
        oscillators[i]->tick();
    }
    //TODO Calculate envelope
    output = sample;
}


void AdditiveSynth::setChoice(int series)
{
    this->series = series;
}
