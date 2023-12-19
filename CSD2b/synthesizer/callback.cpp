#include <iostream>
#include "callback.h"

//User input
void CustomCallback::userInput()
{
    UI console_ui;
    std::string synthOptions[2] = {"simpleSynth", "additiveSynth"};
    int numSynthOptions = 2;

    synthSelection = console_ui.retrieveUserSelection(synthOptions,numSynthOptions); //asks the user which type of synth
    if (synthSelection == 0)
    {
        std::cout << "Choose an oscillator type : " << std::endl;
        std::string waveformOptions[3] = {"sine","saw","triangle"};
        int numWaveformOptions = 3;
        waveFormSelection = console_ui.retrieveUserSelection(waveformOptions, numWaveformOptions);
        std::cout << "How much detune? " << std::endl;
        detuneValue = console_ui.retrieveValueInRange(0,100);
    }
    else
    {
        std::cout << "Which harmonics do you want? " << std::endl;
        std::string harmonicSeriesOptions[3] = {"all","odd","even"};
        int numSeriesOptions = 3;
        harmonicsSelection = console_ui.retrieveUserSelection(harmonicSeriesOptions, numSeriesOptions);
    }
}


void CustomCallback::prepare(int rate) {
    samplerate = (float) rate;

    if (synthSelection == 0) //appoints the chosen sub class
    {
        Synth = new SimpleSynth(samplerate,waveFormSelection);
        Synth->setChoice(detuneValue);
    }
    else
    {
        Synth = new AdditiveSynth(samplerate,harmonicsSelection);
    }

    Synth->setSamplerate(samplerate);
    melody.setNoteDelay(0.1); // sets the delay between notes
    melody.updateNote(); // initializes the first note
    std::cout << "\nPlaying \n Press 'q' to stop \n "  << std::endl;;
}

void CustomCallback::process(AudioBuffer buffer) {
  for (int i = 0; i < buffer.numFrames; ++i) {
    // write sample to buffer at channel 0, amp = 0.25
    buffer.outputChannels[0][i] = Synth->getOutput(); // sample to the buffer
    Synth->tick(); // calculates next sample
    Synth->setFrequency(melody.updateNote());
    //TODO update pitch
  }
}


void CustomCallback::release() {
    delete Synth;
    Synth = nullptr;
}
