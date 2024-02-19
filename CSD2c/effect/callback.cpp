#include "callback.h"


void CustomCallback::prepare(int rate) {
    samplerate = (float) rate;
    std::cout << "\nsamplerate: " << samplerate << "\n";
    delay.prepare(rate);
    // tremolo.prepare(rate);
}

void CustomCallback::process(AudioBuffer buffer) {
  auto [inputChannels, outputChannels, numInputChannels, numOutputChannels, numFrames] = buffer;
  // float sample;
  for (int channel = 0u; channel < numInputChannels; channel++) {
    for (int i = 0u; i < numFrames; i++)
      outputChannels[channel][i] = delay.processFrame(inputChannels[channel][i]);
      // TODO - FIXME - implement baseclass Effect and implement delay
#if 0
      delay.processFrame(sample,  outputChannels[channel][i]);
# endif
    }
}
