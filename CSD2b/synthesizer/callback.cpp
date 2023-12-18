#include "iostream"
#include "callback.h"


void CustomCallback::prepare(int rate) {
    Synth = new AdditiveSynth(samplerate);
    samplerate = (float) rate;
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
