#pragma once

#include "effect.h"

class Waveshaper : public Effect
{
public:
  Waveshaper();
  ~Waveshaper();


private:
  float applyEffect(float sample) override;
};
