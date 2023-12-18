#ifndef CALLBACK_H
#define CALLBACK_H

#include <string>

#include "jack_module.h"
#include "simpleSynth.h"
#include "addSynth.h"
#include "melody.h"
#include "ui.h"


class CustomCallback : public AudioCallback {
public:
  void prepare(int rate) override;
  void process(AudioBuffer buffer) override;
  void release() override;

private:
    int samplerate = 44100;
    Synthesizer* Synth;
    Melody melody = Melody(samplerate);

};

#endif //CALLBACK_H
