#ifndef CALLBACK_H
#define CALLBACK_H

#include <iostream>

#include "schroedersReverb.h"
#include "jack_module.h"
#include "tremolo.h"
#include <saw.h>

class CustomCallback : public AudioCallback {
public:
  void prepare(int sampleRate) override;
  void process(AudioBuffer buffer) override;

private:
  SchroedersReverb effect = SchroedersReverb();
  Saw saws[2];
};

#endif // CALLBACK_H
