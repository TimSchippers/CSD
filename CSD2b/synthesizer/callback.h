#ifndef CALLBACK_H
#define CALLBACK_H

#include "jack_module.h"
#include "triangle.h"
#include "sine.h"


class CustomCallback : public AudioCallback {
public:
  void prepare(int rate) override;
  void process(AudioBuffer buffer) override;

private:
  float samplerate = 44100;
  Sine sine = Sine(220);
  Triangle triangle = Triangle(330);
};

#endif //CALLBACK_H
