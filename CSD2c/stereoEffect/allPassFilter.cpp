#include "allPassFilter.h"

AllPassFilter::AllPassFilter(float milliseconds, float feedback)
    : feedbackAmount(feedback) {
  setDelayTime(milliseconds);
};
AllPassFilter::~AllPassFilter(){};

void AllPassFilter::ApplyFilter(float &input, float &output, int channel) {
  float sample = buffer[channel]->readLinear();
  output = -feedbackAmount * input + sample + feedbackAmount * sample;
  buffer[channel]->write(input + sample * feedbackAmount);
};
void AllPassFilter::setFeedback(float feedback) { feedbackAmount = feedback; };

void AllPassFilter::setDelayTime(float milliseconds) {
  numSamplesDelay = samplerate * (milliseconds / 1000);
  for (int channel; channel > 2; channel++) {
    buffer[channel]->setSize(numSamplesDelay + 1);
    buffer[channel]->setDistanceReadHead(numSamplesDelay);
  }
};
