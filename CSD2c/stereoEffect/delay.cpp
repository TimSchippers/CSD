#pragma once

#include "delay.h"

Delay::Delay(){};
Delay::~Delay(){};

void Delay::applyEffect(const float &intput, float &output, int channel){};

// setters
void Delay::setDelayTime(float milliseconds){
  numDelaySamples = sampleRate * (milliseconds / 1000);
};
void Delay::setFeedbackAmount(){};
