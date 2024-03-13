#include "schroedersReverb.h"
SchroedersReverb::SchroedersReverb(){};
SchroedersReverb::~SchroedersReverb(){};

void SchroedersReverb::applyEffect(const float &input, float &output, int channel) {};

void SchroedersReverb::setReverbTime(float milliseconds){
  for (int filter = 0; filter < 4; filter++){
    float delayTime = combFilters[filter]->getDelayTime();
    float feedback = pow(10, (-3 * delayTime * samplerate) / milliseconds);
    combFilters[filter]->setFeedbackAmount(feedback);
  }
};
