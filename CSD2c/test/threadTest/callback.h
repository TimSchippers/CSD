#ifndef CALLBACK_H
#define CALLBACK_H

#include <iostream>

#include "delay.h"
#include "jack_module.h"

class CustomCallback : public AudioCallback {
public:
  void prepare(int sampleRate) override;
  void process(AudioBuffer buffer) override;
  // TODO get it out of the callback
  void setDelayTime(float milliseconds);
  float getDelayTime();
  void setDelayFeedback(float feedback);
  float getDelayFeedback();

private:
  Delay delay = Delay(300);
};

#endif // CALLBACK_H
