#ifndef CALLBACK_H
#define CALLBACK_H

#include "jack_module.h"
#include "simpleSynth.h"


class CustomCallback : public AudioCallback {
public:
  void prepare(int rate) override;
  void process(AudioBuffer buffer) override;

private:
    int samplerate = 44100;
    Synthesizer Synth = Synthesizer(samplerate) ;
};

#endif //CALLBACK_H
