#include "callback.h"
#include <iostream>
#include <ostream>

#define SAW_INPUT 0

void CustomCallback::prepare(int sampleRate) {
  std::cout << "\nsamplerate: " << sampleRate << "\n";
#if SAW_INPUT
  for (int i = 0; i < 2; i++) {
    saws[i].prepare(sampleRate);
    saws[i].setFrequency(220);
  }
#endif
}

void CustomCallback::setDelayTime(float milliseconds) {
  delay.setDelayTime(milliseconds, 0);
}

float CustomCallback::getDelayTime() {
  float delayTime = delay.getDelayTime();
  return delayTime;
}
void CustomCallback::setDelayFeedback(float feedback) {
  delay.setFeedbackAmount(feedback);
}

float CustomCallback::getDelayFeedback() {
  float feedbackAmount = delay.getFeedbackAmount();
  return feedbackAmount;
}

void CustomCallback::process(AudioBuffer buffer) {
  auto [inputChannels, outputChannels, numInputChannels, numOutputChannels,
        numFrames] = buffer;
  float signal[2];
  for (int channel = 0u; channel < numOutputChannels; ++channel) {
    for (int sample = 0u; sample < numFrames; ++sample) {
#if SAW_INPUT
      signal[channel] = 0.2 * saws[channel].genNextSample();
      reverb.processSignal(signal[channel], outputChannels[channel][sample],
                           channel);
#else
      delay.processSignal(inputChannels[0][sample],
                          outputChannels[channel][sample], channel);
      // reverb.processSignal(signal[channel], outputChannels[channel][sample],
      //                     channel);
      samples++;
      if (samples == 88200) {
        seconds++;
        samples -= 88200;
        std::cout << seconds << std::endl;
      }
#endif
    }
  }
}
