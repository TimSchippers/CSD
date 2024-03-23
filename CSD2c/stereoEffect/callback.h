#ifndef CALLBACK_H
#define CALLBACK_H

#include <atomic>
#include <iostream>

#include "delay.h"
#include "jack_module.h"
#include "schroedersReverb.h"
#include "tremolo.h"
#include <queue>
#include <saw.h>

class CustomCallback : public AudioCallback {
public:
  void prepare(int sampleRate) override;
  void process(AudioBuffer buffer) override;
  // TODO get it out of the callback
  void setDelayTime(float milliseconds);
  float getDelayTime();
  void setDelayFeedback(float feedback);
  float getDelayFeedback();
  enum ParameterChanges {
    mdt, // more delay time
    ldt, // less delay tim
    mdf, // more delay feedback
    ldf, // less delay feedback
  };
  void addToQueue(ParameterChanges parameterChanges);
  void processQueue();

private:
  long samples = 0;
  long seconds = 0;
  Delay delay = Delay(300);
//  SchroedersReverb reverb = SchroedersReverb();
//  Saw saws[2];

  std::queue<ParameterChanges> thisQueue;
};

#endif // CALLBACK_H
