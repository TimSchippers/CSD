#include "circularBuffer.h"

// an all pass filter based on the formula found in 
// the book "Designing audio effect plugins by Will C. Pirkle
class AllPassFilter {
public:
  AllPassFilter(float milliseconds, float feedback);
  ~AllPassFilter();

  void ApplyFilter(float &input, float &output, int channel);
  void setFeedback(float feedback);
  void setDelayTime(float milliseconds);

private:
  int samplerate;
  CircularBuffer* buffer[2];
  float numSamplesDelay;
  float feedbackAmount;
};
