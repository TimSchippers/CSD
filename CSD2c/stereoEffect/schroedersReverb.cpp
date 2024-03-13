#include "schroedersReverb.h"
#include "delay.h"
#include <iostream>
#include <ostream>

SchroedersReverb::SchroedersReverb() {
  for (int apf = 0; apf < 2; apf++) {
    apfs[apf] = new AllPassFilter(3, 0.1);
  }
  for (int comb = 0; comb < 4; comb++) {
    combFilters[comb] = new Delay(30 + (3 * comb));
  }
  setReverbTime(333);
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

  float combFilterSample[4];
  for (int comb = 0; comb < 4; comb++) {
    combFilters[comb]->processSignal(input, combFilterSample[comb], channel);
    combFilterSignal += combFilterSample[comb] / 4 ;
  }
  apfs[0]->applyFilter(combFilterSignal, apfSignal, channel);
  apfs[1]->applyFilter(apfSignal, output, channel);
  //std::cout << "check" << check << std::endl;
  check++;

  memset(combFilterSample, 0, 4 * sizeof(int));
}

// sets de feedback values so that every filter has the same decay time
void SchroedersReverb::setReverbTime(float milliseconds) {
  for (int filter = 0; filter < 4; filter++) {
    float delayTime = combFilters[filter]->getDelayTime();
    float feedback = pow(10, (-3 * delayTime ) / milliseconds);
    std::cout << feedback << std::endl;
    combFilters[filter]->setFeedbackAmount(feedback);
  }
}
