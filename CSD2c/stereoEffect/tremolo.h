#pragma once

#include <sine.h>

class Tremolo{
public:
  Tremolo();
  ~Tremolo();
  
  void applyEffect(const double &input, double &output);

  //setters and getters
  void setModRate(double freq);
  void setModDepth(double modDepth);
private:
  //TODO make it so it has different waves
  Sine sine;
  
  double modDepth;
  double modRate;
  double modSignal;
};
