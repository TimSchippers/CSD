#ifndef CALLBACK_H
#define CALLBACK_H

#include <iostream>
#include "jack_module.h"
#include "delay.h"

class CustomCallback : public AudioCallback {
public:
  void prepare(int sampleRate) override;
  void process(AudioBuffer buffer) override;
  // TODO get it out of the callback
  void setDelayTime(float milliseconds);
  float getDelayTime();
  void setDelayFeedback(float feedback);
  float getDelayFeedback();

  int getSeconds();

private:
  int seconds = 0;
  long samples = 0;
  Delay delay = Delay(300);
};

#endif // CALLBACK_H
