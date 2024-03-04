#pragma once

#include "circularBuffer.h"
#include "effect.h"

class Delay : public Effect {
public:
  Delay();
  ~Delay();

  void applyEffect(const float &intput, float &output, int channel) override;
  void prepare(int sampleRate) override;

  // setters
  void setDelayTime(float milliseconds);
  void setFeedbackAmount(float feedback);

private:
  // TODO change to vector to have an modular amount of buffers
  CircularBuffer *buffer[2];
  int sampleRate;
  float numDelaySamples;
  float feedbackAmount;

};
