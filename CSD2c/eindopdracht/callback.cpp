#include "callback.h"
#include <iostream>
#include <ostream>

void CustomCallback::prepare(int sampleRate) {
  std::cout << "\nsamplerate: " << sampleRate << "\n";
  delay.prepare(sampleRate);
  reverb.setDryWet(0.3);
}

void CustomCallback::addToQueue(ParameterChanges parameterChanges) {
  thisQueue.emplace(parameterChanges);
}

void CustomCallback::processQueue() {
  if (thisQueue.empty()) {
    boredValue++;
  } else {
    switch (thisQueue.front()) {
    case ParameterChanges::mdt: {
      float newDelayTime = delay.getDelayTime() + 50;
      delay.setDelayTime(newDelayTime, stereoOffset);
      thisQueue.pop();
      break;
    }
    case ParameterChanges::ldt: {
      float newDelayTime = delay.getDelayTime() - 50;
      delay.setDelayTime(newDelayTime, stereoOffset);
      thisQueue.pop();
      break;
    }
    case ParameterChanges::mdf: {
      float newFeedbackAmount = delay.getFeedbackAmount() + 0.05;
      delay.setFeedbackAmount(newFeedbackAmount);
      thisQueue.pop();
      break;
    }
    case ParameterChanges::ldf: {
      float newFeedbackAmount = delay.getFeedbackAmount() - 0.05;
      delay.setFeedbackAmount(newFeedbackAmount);
      thisQueue.pop();
      break;
    }
    case ParameterChanges::d: {
      stereoOffset = 0.5;
      std::cout << "dotted delay" << std::endl;
      delay.setDelayTime(delay.getDelayTime(), stereoOffset);
      thisQueue.pop();
      break;
    }
    case ParameterChanges::t: {
      stereoOffset = 0.33;
      std::cout << "triplet delay" << std::endl;
      delay.setDelayTime(delay.getDelayTime(), stereoOffset);
      thisQueue.pop();
      break;
    }
    case ParameterChanges::n: {
      stereoOffset = 0;
      std::cout << "normal delay" << std::endl;
      delay.setDelayTime(delay.getDelayTime(), stereoOffset);
      thisQueue.pop();
      break;
    }
    case ParameterChanges::mrt: {
      float newReverbTime = reverb.getReverbTime() + 100;
      reverb.setReverbTime(newReverbTime);
      thisQueue.pop();
      break;
    }
    case ParameterChanges::lrt: {
      float newReverbTime = reverb.getReverbTime() - 100;
      reverb.setReverbTime(newReverbTime);
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
      delay.processSignal(inputChannels[0][sample], signal[channel], channel);
      reverb.processSignal(signal[channel], signal[channel], channel);
      outputChannels[channel][sample] = signal[channel];
      samples++;
      if (thisQueue.size() >= 5) {
        if (freezed == false) {
          reverb.freeze();
          freezed = true;
        }
      }
      if (samples >= 88200) {
        seconds++;
        if (seconds == 3 && freezed == false) {
          processQueue();
          seconds -= 3;
        }
        samples -= 88200;
      }
    }
  }
}
