#ifndef CALLBACK_H
#define CALLBACK_H

#include <iostream>

#include "allPassFilter.h"
#include "jack_module.h"
#include "tremolo.h"
#include <saw.h>

class CustomCallback : public AudioCallback {
public:
  void prepare(int sampleRate) override;
  void process(AudioBuffer buffer) override;

private:
  AllPassFilter effect = AllPassFilter(20, 0);
  Saw saws[2];
};

#endif // CALLBACK_H
