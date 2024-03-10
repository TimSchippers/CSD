#ifndef CALLBACK_H
#define CALLBACK_H

#include <iostream>

#include "chorus.h"
#include "jack_module.h"
#include "tremolo.h"
#include <saw.h>

class CustomCallback : public AudioCallback {
public:
  void prepare(int sampleRate) override;
  void process(AudioBuffer buffer) override;

private:
  Chorus effect = Chorus(20);
  Saw saws[2];
};

#endif // CALLBACK_H
