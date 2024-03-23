#include "callback.h"
#include <atomic>
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

void CustomCallback::addToQueue(ParameterChanges parameterChanges) {
  thisQueue.push(parameterChanges);
  std::cout << thisQueue.front() << std::endl;
}

void CustomCallback::processQueue() {
  if (thisQueue.empty()) {
    std::cout << "empty" << std::endl;
  } else {
    switch (thisQueue.front()) {
    case ParameterChanges::mdt: {
      std::cout << "more delay time" << std::endl;
      float newDelayTime = delay.getDelayTime() + 50;
      delay.setDelayTime(newDelayTime, 0);
      thisQueue.pop();
      break;
    }
    case ParameterChanges::ldt: {
      std::cout << "less delay time" << std::endl;
      float newDelayTime = delay.getDelayTime() - 50;
      delay.setDelayTime(newDelayTime, 0);
      thisQueue.pop();
      break;
    }
    case ParameterChanges::mdf: {
      std::cout << "more feedback" << std::endl;
      float newFeedbackAmount = delay.getFeedbackAmount() + 0.05;
      delay.setFeedbackAmount(newFeedbackAmount);
      thisQueue.pop();
      break;
    }
    case ParameterChanges::ldf: {
      std::cout << "less feedback" << std::endl;
      float newFeedbackAmount = delay.getFeedbackAmount() - 0.05;
      delay.setFeedbackAmount(newFeedbackAmount);
      thisQueue.pop();
      break;
    }
    default:
      throw "invalid input";
      break;
    }
  }
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
      // reverb.processSignal(inputChannels[0][sample],
      // outputChannels[channel][sample],
      //                    channel);
      samples++;
      if (samples == 88200) {
        seconds++;
       // std::cout << seconds << std::endl;
        processQueue();
        samples -= 88200;
      }
#endif
    }
  }
}
