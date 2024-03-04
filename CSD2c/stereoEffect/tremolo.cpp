#include "tremolo.h"

Tremolo::Tremolo() : channels(2){
  sines[0].prepare(44100);
  sines[1].prepare(44100);
  setModRate(6);
  setModDepth(1);
};
Tremolo::~Tremolo(){};

void Tremolo::applyEffect(const float &input, float &output, int channel) {
  // transform the osc output range [-1, 1] to [0, 1]
  modSignal = sines[channel].genNextSample() * 0.5 + 0.5;

  std::cout << channel << ", " << modSignal << std::endl;
  modSignal *= modDepth;
  modSignal -= 1.0f - modDepth;
  

  output = input * modSignal;
};

// setters and getters
void Tremolo::setModRate(double freq) {
  for (int channel = 0; channel < channels; channel++) {
    sines[channel].setFrequency(freq);
  }
}

void Tremolo::setModDepth(double modDepth) { this->modDepth = modDepth; }
