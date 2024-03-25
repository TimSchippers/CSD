#pragma once
#include "effect.h"
#include <math.h>

// bitcrusher made by Jari Deelstra
// bitcrusher calculations from pirkle

class Bitcrusher : public Effect {
public:
  void setBitDepth(float bitDepth);

  void applyEffect(const float &input, float &output, int channel) override;

private:
  float bitDepth;
};
