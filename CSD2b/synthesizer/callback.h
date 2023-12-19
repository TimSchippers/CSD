//built on the callback from Ciska
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
  void userInput();
  void prepare(int rate) override;
  void process(AudioBuffer buffer) override;
  void release() override;

private:
    int samplerate = 44100;
    int synthSelection;
    Synthesizer* Synth;
    Melody melody = Melody(samplerate);

    int waveFormSelection = 0;
    float detuneValue = 0;
    int harmonicsSelection = 0;

};

#endif //CALLBACK_H
