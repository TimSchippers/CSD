#include "chorus.h"
#include <iostream>
#include <ostream>

Chorus::Chorus(float milliseconds) : delayTime(milliseconds) {
  // TODO clock = main clock
  prepare(44100);
  setMaxDelayTime(30);
  setDelayTime(delayTime);
};
Chorus::~Chorus() {
  for (int channel = 0; channel < 2; channel++) {
    delete (buffer[channel]);
  }
};

void Chorus::prepare(int sampleRate) {
  this->sampleRate = sampleRate;
  std::cout << "preparing delay" << std::endl;
  for (int channel = 0; channel < 2; channel++) {
    buffer[channel] = new CircularBuffer;
    lfos[channel].prepare(sampleRate);
    lfos[channel].setFrequency(2);
  }
}

void Chorus::applyEffect(const float &input, float &output, int channel) {
  modSignal = lfos[channel].genNextSample();
  modSignal *= modDepth;
  output = buffer[channel]->read();
  buffer[channel]->write(input);
  setDelayTime(delayTime + modSignal);
};

void Chorus::setDelayTime(float milliseconds) {
  // TODO valuate stereoOffset to buffersize
  std::cout << "setting delay time in " << milliseconds << " milliseconds"
            << std::endl;
  numDelaySamples = sampleRate * (milliseconds / 1000);
  for (int channel = 0; channel < 2; channel++) {
    buffer[channel]->setDistanceReadHead(numDelaySamples);
  }
};

void Chorus::setMaxDelayTime(float milliseconds) {
  std::cout << "setting max delay time in " << milliseconds << " milliseconds"
            << std::endl;
  numMaxDelaySamples = sampleRate * (milliseconds / 1000);
  for (int channel = 0; channel < 2; channel++) {
    buffer[channel]->setSize(numMaxDelaySamples);
  }
};

void Chorus::setModRate(double freq) {
  // for (int channel = 0; channel < channels; channel++) {
  //  lfos[channel].setFrequency(freq);
  //}
  lfos[0].setFrequency(freq);
  lfos[1].setFrequency(1.5 * freq);
}

void Chorus::setModDepth(double modDepth) { this->modDepth = modDepth; }
