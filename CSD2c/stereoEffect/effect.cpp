#include "effect.h"

Effect::Effect() : channels(2){ setDryWet(0.5); };

Effect::~Effect() {}

void Effect::processSignal(const float &input, float &output, int channel) {
  applyEffect(input, output, channel);
  output = input * dryVolume + output * wetVolume;
};

void Effect::setDryWet(float dryWet) {
  dryVolume = 1 - dryWet;
  wetVolume = dryWet;
};
