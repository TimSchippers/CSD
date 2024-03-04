#include "effect.h"
#include <iostream>

Effect::Effect() { setDryWet(0.5); }

Effect::~Effect() {}

float Effect::processFrame(float input) {
  float output = applyEffect(input);
  output *= wetVolume;
  output += input * dryVolume;
  return output;
};

void Effect::setDryWet(float dryWet) {
  if (dryWet > 0.0f && dryWet < 1.0f) {
    wetVolume = dryWet;
    dryVolume = 1.f - dryWet;
  } else {
    std::cout << "Please enter a value between 0 and 1" << std::endl;
  }
}
