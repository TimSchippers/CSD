#pragma once

#include "delay.h"
#include <iostream>
#include <ostream>

Delay::Delay(float milliseconds) {
  // TODO clock = main clock
  prepare(44100);
  setMaxDelayTime(4000);
  setDelayTime(milliseconds);
  setFeedbackAmount(0.2f);
};
Delay::~Delay() {
  for (int channel = 0; channel < 2; channel++) {
    delete (buffer[channel]);
  }
};

void Delay::prepare(int sampleRate) {
  this->sampleRate = sampleRate;
  std::cout << "preparing delay" << std::endl;
  for (int channel = 0; channel < 2; channel++) {
    buffer[channel] = new CircularBuffer;
  }
}

void Delay::applyEffect(const float &input, float &output, int channel) {
  output = feedbackAmount * buffer[channel]->read();
  buffer[channel]->write(input + output);
};

// setters
void Delay::setDelayTime(float milliseconds) {
  std::cout << "setting delay time in " << milliseconds << " milliseconds"
            << std::endl;
  numDelaySamples = sampleRate * (milliseconds / 1000);
  for (int channel = 0; channel < 2; channel++) {
    buffer[channel]->setDistanceReadHead(numDelaySamples);
  }
};

void Delay::setMaxDelayTime(float milliseconds) {
  std::cout << "setting max delay time in " << milliseconds << " milliseconds"
            << std::endl;
  numMaxDelaySamples = sampleRate * (milliseconds / 1000);
  for (int channel = 0; channel < 2; channel++) {
    buffer[channel]->setSize(numMaxDelaySamples);
  }
};

void Delay::setFeedbackAmount(float feedback) { feedbackAmount = feedback; };
