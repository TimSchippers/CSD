#include "simpleSynth.h"

SimpleSynth::SimpleSynth(float samplerate,int waveformSelection) : Synthesizer(samplerate)
{
    this->waveformSelection = waveformSelection;
    this->numOscillators = 5;
    // std::cout << "SimpleSynth Constructor" << std::endl;
    if(waveformSelection==0)
    {
        for (int i = 0; i < numOscillators; i++)
            {
            oscillators.push_back(new Sine);
            };
    }
    if(waveformSelection==1)
    {
        for (int i = 0; i < numOscillators; i++)
            {
                oscillators.push_back(new Saw);
            };
    }
    if(waveformSelection==2)
    {
        for (int i = 0; i < numOscillators; i++)
        {
            oscillators.push_back(new Triangle);
        };
    }

}

SimpleSynth::~SimpleSynth()
{
    // std::cout << "SimpleSynth Deconstructor" << std::endl;
}

void SimpleSynth::tick()
{
    sampleStep += sampleStepSize;
    for (int i = 0; i < numOscillators; i++)
    {
        oscillators[i]->setFrequency(pow(-2,i)*detune+frequency); // sets the frequency for each oscillator with detune
        sample += oscillators[i]->getWaveSample() ;
        oscillators[i]->tick(); // calculates next sample
    }
    sample /= numOscillators;
    //TODO Calculate envelope
    output = sample;
}

void SimpleSynth::setDetune(float detune)
{
    this->detune = detune/25.0f;
}

void SimpleSynth::setChoice(int choiceInt)
{
    setDetune(choiceInt);
}
