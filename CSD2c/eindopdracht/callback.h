#pragma once

#include <iostream>
#include <queue>

#include "jack_module.h"

#include "chorus.h"
#include "delay.h"
#include "bitcrusher.h"
#include "schroedersReverb.h"
#include "tremolo.h"

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
    d,   // set right delay to dotted
    t,   // set right delay to triplet
    n,   // set both delays to same delaytime
    mrt, // set more reverbtime
    lrt, // set less reverb time
  };
  void addToQueue(ParameterChanges parameterChanges);
  void processQueue();

private:
  int boredValue = 0;
  int samples = 0;
  int seconds = 0;
  float stereoOffset = 0;
  bool freezed = false;

  Tremolo tremolo = Tremolo();
  Delay delay = Delay(300);
  SchroedersReverb reverb = SchroedersReverb();


  std::queue<ParameterChanges> thisQueue;
};
