#pragma once

#include "effect.h"
#include <iostream>
#include <sine.h>

class Tremolo : public Effect
{
public:
  Tremolo(float freq, float modDepth);
  ~Tremolo();

  void prepare(float sampleRate) override;


  // setters and getters
  void setModFreq(float freq);

private:
  float applyEffect(float sample) override;
  float modDepth;
  Sine sine;

  // hide default constructor
  Tremolo(){}
};
