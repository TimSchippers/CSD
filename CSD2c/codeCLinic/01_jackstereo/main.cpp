#include "jack_module.h"
#include <iostream>

#include <oscillator.h>
#include <sine.h>
#define SAMPLERATE 44100

struct CustomCallback : AudioCallback {
  explicit CustomCallback() : AudioCallback() {}

  ~CustomCallback() {}

  void prepare(int sampleRate) override {
    for (int i = 0; i < 2; i++) {
      sines[i].prepare(sampleRate);
    }
    sines[0].setFrequency(400);
    sines[1].setFrequency(600);
  }

  // OPDRACHT: Maak twee output signalen die verschillen
  // bijv: Links zaagtand, Recht blokgolf
  // bijv: Links Waveshaper, Rechts Delay
  void process(AudioBuffer buffer) override {
    auto [inputChannels, outputChannels, numInputChannels, numOutputChannels,
          numFrames] = buffer;

    for (int channel = 0u; channel < numOutputChannels; ++channel) {
      for (int sample = 0u; sample < numFrames; ++sample) {
        outputChannels[channel][sample] =
            sines[channel].genNextSample();
      }
    }
  }

private:
  Sine sines[2];
};

int main() {
  auto callback = CustomCallback{};
  auto jackModule = JackModule{callback};
  jackModule.init(1, 2); // Belangrijk dat je hier 2 van maakt

  std::cout << "Press q Enter to quit..." << std::endl;
  bool running = true;
  while (running) {
    switch (std::cin.get()) {
    case 'q':
      running = false;
      break;
    }
  }

  return 0;
}
