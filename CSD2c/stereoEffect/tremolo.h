#pragma once

#include <sine.h>
#include <iostream>

class Tremolo{
public:
  Tremolo();
  ~Tremolo();
  
  void applyEffect(const float &input, float &output, int channel);

  //setters and getters
  void setModRate(double freq);
  void setModDepth(double modDepth);
private:
  int channels;
  double modDepth;
  double modRate;
  double modSignal;

  //TODO make it so it has different waves
  Sine sines[2];
};
