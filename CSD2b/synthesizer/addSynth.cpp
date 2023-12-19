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

float AdditiveSynth::calculateHarmonics(float frequency,int index,int series) //series 0=ALL 1=ODD 2=EVEN
{
    if (series == 1){
        if( index == 0){
            this->frequency = frequency;
            return frequency;
        }
        else
        {
            frequency += (frequency*(index * 2) - 1);
            return frequency;
        }
    }
    else if (series == 2){
        frequency += (frequency * index * 2);
        return frequency;
    }
    else
    {
        frequency += (frequency * index);
        return frequency;
    }
}

void AdditiveSynth::setChoice(int series)
{
    this->series = series;
}
