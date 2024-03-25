#include "schroedersReverb.h"
#include "delay.h"
#include <iostream>
#include <ostream>

SchroedersReverb::SchroedersReverb() {
  combFilters[0] = new Delay(36.7);
  combFilters[1] = new Delay(48.6);
  combFilters[2] = new Delay(44.0);
  combFilters[3] = new Delay(40.6);
  apfs[0] = new AllPassFilter(6.12, 0.7);
  apfs[1] = new AllPassFilter(2.12, 0.7);
  setReverbTime(2100);
}

SchroedersReverb::~SchroedersReverb() {
  for (int apf = 0; apf < 2; apf++) {
    delete apfs[apf];
  }
  for (int comb = 0; comb < 4; comb++) {
    delete combFilters[comb];
  }
}

void SchroedersReverb::applyEffect(const float &input, float &output,
                                   int channel) {
  float combfilterOutput[4];
  for (int comb = 0; comb < 4; comb++) {
    combFilters[comb]->applyEffect(input * inputGain, combfilterOutput[comb],
                                   channel);
  }
  combFilterSignal = (combfilterOutput[0] + combfilterOutput[1] +
                      combfilterOutput[2] + combfilterOutput[3]) /
                     4;
  apfs[0]->applyFilter(combFilterSignal, apfSignal, channel);
  apfs[1]->applyFilter(apfSignal, output, channel);
}

// sets de feedback values so that every filter has the same decay time
void SchroedersReverb::setReverbTime(float milliseconds) {
  reverbTime = milliseconds;
  std::cout << "reverb time = " << reverbTime << std::endl;
  for (int filter = 0; filter < 4; filter++) {
    float delayTime = combFilters[filter]->getDelayTime();
    float feedback = pow(10, (-3 * delayTime) / milliseconds);
    combFilters[filter]->setFeedbackAmount(feedback);
  }
}

void SchroedersReverb::freeze() {
  std::cout << "freeze" << std::endl;
  inputGain = 0;
  setReverbTime(10000000);
}

float SchroedersReverb::getReverbTime() { return reverbTime ;}
