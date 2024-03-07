#include "tremolo.h"

Tremolo::Tremolo(): modRate(6) {
  // TODO use sample rate of main clock the main clock
  prepare(44100);
  setModRate(modRate);
  setModDepth(1);
};

Tremolo::~Tremolo(){};

void Tremolo::prepare(int sampleRate) {
  for (int channel = 0; channel < channels; channel++) {
    sines[channel].prepare(sampleRate);
  }
};

void Tremolo::applyEffect(const float &input, float &output, int channel) {
  // transform the osc output range [-1, 1] to [0, 1]
  modSignal = sines[channel].genNextSample() * 0.5 + 0.5;

  modSignal *= modDepth;
  modSignal -= 1.0f - modDepth;

  output = input * modSignal;
};

void Tremolo::setModRate(double freq) {
 // for (int channel = 0; channel < channels; channel++) {
  //  sines[channel].setFrequency(freq);
  //}
  sines[0].setFrequency(freq);
  sines[1].setFrequency(1.5*freq);
}

void Tremolo::setModDepth(double modDepth) { this->modDepth = modDepth; }
