#pragma once

#include "effect.h"

#include <cmath>
class Waveshaper : public Effect {
public:
  Waveshaper(float intensity);
  ~Waveshaper();

  void setIntensity(float intensity);

private:
  float applyEffect(float sample) override;
  float intensity;

  Waveshaper();
};
