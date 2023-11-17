#include <iostream>
#include <string>

class Instrument {
  std::string materialSoundSource = "string";
  std::string exciter = "bow";
  int numSoundSources = 1;

public:
  void play() {
    if (materialSoundSource == "string" && exciter == "bow") {
      std::cout << "bowed string sound" << std::endl;
    }
  };
};

int main() {
  Instrument violin;
  violin.play();
};
