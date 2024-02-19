#pragma once

#include <iostream>

class Effect
{
public:
  Effect();
  virtual ~Effect();
  float processFrame(float input);
  virtual void prepare(float sampleRate) { };

  // setters
  void setDryWet(float dryWet);

protected:
  virtual float applyEffect(float input) = 0;

private:
    float dryVolume;
    float wetVolume;
};
