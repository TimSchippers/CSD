#include "effect.h"
#include <sine.h>

class Chorus : public Effect {
public:
  Chorus();
  ~Chorus();

  void prepare(float sampleRate) override;
  void write(float input);
  float read();

  void setReadH(int numSamplesDelay);
  void setDelayTime(float milliseconds);
  void setMaxDelayTime(float milliseconds);
  void setFeedbackAmount(float feedback);

private:
  float *buffer;
  int readH;
  int writeH;
  int size;
  int numSamplesDelay;
  float sampleRate;
  float output;
  Sine Sine;

  float applyEffect(float sample) override;
  inline void wrapHead(int &head) {
    if (head >= size)
      head -= size;
  }
};
