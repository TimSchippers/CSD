#include <iostream>
#include "callback.h"

//User input
UI console_ui;
std::string synthOptions[2] = {"simpleSynth", "additiveSynth"};
int numSynthOptions = 2;

int synthSelection = console_ui.retrieveUserSelection(synthOptions,numSynthOptions);

void CustomCallback::prepare(int rate) {
    samplerate = (float) rate;

    if (synthSelection == 0)
    {
    Synth = new SimpleSynth(samplerate);
    }
    if (synthSelection == 1)
    {
    Synth = new AdditiveSynth(samplerate);
    }

    Synth->setSamplerate(samplerate);
    melody.setNoteDelay(0.1);
    melody.updateNote();
    std::cout << "\nsamplerate: " << samplerate << "\n";
}

void CustomCallback::process(AudioBuffer buffer) {
  for (int i = 0; i < buffer.numFrames; ++i) {
    // write sample to buffer at channel 0, amp = 0.25
    buffer.outputChannels[0][i] = Synth->getOutput();
    Synth->tick();
    Synth->setFrequency(melody.updateNote());
    //TODO update pitch
  }
}


void CustomCallback::release() {
    delete Synth;
    Synth = nullptr;
}
