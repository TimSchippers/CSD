//
// Created by Dean on 02/12/2023.
#include "Filters.h"
#include "deltasequence.h"
#include "saw.h"
#include <iostream>
#include <jack_module.h>

struct CustomCallback : AudioCallback {
  explicit CustomCallback() : AudioCallback() { filter.setCoefficient(0.5); }

  ~CustomCallback() {
    delete saw;
    saw = nullptr;
  }

  void prepare(int sampleRate) override {
    saw = new Saw();
    saw->prepare(sampleRate);
    saw->setFrequency(110);
  }

  void process(AudioBuffer buffer) override {
    auto [inputChannels, outputChannels, numInputChannels, numOutputChannels,
          numFrames] = buffer;

    for (auto sample = 0u; sample < numFrames; ++sample) {
      auto output = saw->genNextSample() * 0.2;
      for (auto channel = 0u; channel < numOutputChannels; ++channel) {
        outputChannels[channel][sample] = filter.process(output);
      }
    }
  }

  Saw *saw;
  FourSample filter;
};

#define Delta_Sequence 1

int main() {

#if Delta_Sequence
  FourSample filter;

  filter.setCoefficient(0.5);

  double input;

  for (int i = -3; i < 14; i++) {
    if (i == 0) {
      input = 1.0;
    } else {
      input = 0.0;
    }

    std::cout << filter.process(input) << std::endl;
  }

#else
  auto callback = CustomCallback();
  auto jackModule = JackModule{callback};
  jackModule.init(1, 2);

  std::cout << "Press q Enter to quit..." << std::endl;
  bool running = true;
  while (running) {
    switch (std::cin.get()) {
    case 'q':
      running = false;
      break;
    }
  }
#endif
  return 0;
}
