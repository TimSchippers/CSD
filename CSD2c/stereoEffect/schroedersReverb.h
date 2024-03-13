#include "allPassFilter.h"
#include "delay.h"
#include "effect.h"

class SchroedersReverb : public Effect {
public:
  SchroedersReverb();
  ~SchroedersReverb();

  void applyEffect(const float &input, float &output, int channel) override;
  void setReverbTime(float milliseconds);

private:
  AllPassFilter* apfs[2];
  Delay* combFilters[4];

  float reverbTime;
  float samplerate;
  float combFilterSignal;
  float apfSignal;


  int check;
};
