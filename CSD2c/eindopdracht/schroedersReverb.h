#include "allPassFilter.h"
#include "delay.h"
#include "effect.h"

// based on the example on schroeder reverb in 
// the book "Designing audio effect plugins by Will C. Pirkle
class SchroedersReverb : public Effect {
public:
  SchroedersReverb();
  ~SchroedersReverb();

  void applyEffect(const float &input, float &output, int channel) override;
  void setReverbTime(float milliseconds);

  float getReverbTime();
  void freeze();

private:
  AllPassFilter* apfs[2];
  Delay* combFilters[4];

  float inputGain=1;
  float reverbTime;
  float samplerate;
  float combFilterSignal;
  float apfSignal;
};
