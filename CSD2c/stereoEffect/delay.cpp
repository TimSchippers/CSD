#pragma once

#include "delay.h"
#include "circularBuffer.h"

Delay::Delay(){};
Delay::~Delay(){};

void Delay::prepare(int sampleRate) {
  this->sampleRate = sampleRate;
  for (int channel = 0; channel < 2; channel++) {
    buffer[channel] = new CircularBuffer;
  }
}

void Delay::applyEffect(const float &input, float &output, int channel) {
  output = buffer[channel]->read();
  buffer[channel]->write(input + (output * feedbackAmount));
  //TODO increment heads
};

// setters
void Delay::setDelayTime(float milliseconds) {
  numDelaySamples = sampleRate * (milliseconds / 1000);
  for (int channel = 0; channel < 2; channel++) {
    buffer[channel]->setDistanceReadHead(numDelaySamples);
  }
};
void Delay::setFeedbackAmount(float feedback) { feedbackAmount = feedback; };
