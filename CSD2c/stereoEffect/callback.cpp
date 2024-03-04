#include "callback.h"

void CustomCallback::prepare(int sampleRate) {
  std::cout << "\nsamplerate: " << sampleRate << "\n";
  for (int i = 0; i < 2; i++) {
    saws[i].prepare(sampleRate);
    saws[i].setFrequency(220);
  }
}

void CustomCallback::process(AudioBuffer buffer) {
  auto [inputChannels, outputChannels, numInputChannels, numOutputChannels,
        numFrames] = buffer;
  float signal[2];
  for (int channel = 0u; channel < numOutputChannels; ++channel) {
    for (int sample = 0u; sample < numFrames; ++sample) {
      // TODO make stereo effect
      signal[channel] = saws[channel].genNextSample();
      tremolo.applyEffect(signal[channel], signal[channel], channel);
      outputChannels[channel][sample] = signal[channel];
    }
  }
}
