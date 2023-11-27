#include <iostream>
#include <string>

class Instrument {
public:
  Instrument(std::string material, std::string exciter) {
    materialSoundSource = material;
    this->exciter = exciter;
  }
  std::string materialSoundSource;
  std::string exciter;
  int numSoundSources = 1;

  void play() {
    if (materialSoundSource == "string" && exciter == "bow") {
      std::cout << "bowed string sound" << std::endl;
    }
  }
};

int main() {
  Instrument violin("string", "bow");
  violin.play();
}
