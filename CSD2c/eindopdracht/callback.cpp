#include "callback.h"
#include <iostream>

#define SAW_INPUT 0

void CustomCallback::prepare(int sampleRate) {
  std::cout << "\nsamplerate: " << sampleRate << "\n";
  delay.prepare(sampleRate);
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
      std::cout << "triplet delay" << std::endl;
      delay.setDelayTime(delay.getDelayTime(), stereoOffset);
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
      delay.processSignal(inputChannels[0][sample],
                          outputChannels[channel][sample], channel);
      // reverb.processSignal(inputChannels[0][sample],
      // outputChannels[channel][sample],
      //                    channel);
      samples++;
      if (samples >= 88200) {
        seconds++;
        if (seconds == 3) {
          processQueue();
          seconds -= 3;
        }
        samples -= 88200;
      }
    }
  }
}
