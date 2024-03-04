#ifndef CALLBACK_H
#define CALLBACK_H

#include <iostream>

#include <saw.h>
#include "jack_module.h"
#include "tremolo.h"

class CustomCallback : public AudioCallback {
public:
  void prepare(int sampleRate) override;
  void process(AudioBuffer buffer) override;

private:
  Tremolo tremolo;
  Saw saws[2];
};

#endif // CALLBACK_H
