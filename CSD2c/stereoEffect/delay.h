#pragma once

#include "effect.h"
class Delay : public Effect {
public:
  Delay();
  ~Delay();

  void applyEffect(const float &intput, float &output, int channel) override;

  // setters
  void setDelayTime(float milliseconds);
  void setFeedbackAmount();

private:
  float *buffer;
  int numDelaySamples;
  int bufferSize;
  int readHead;
  int writeHead;
};
