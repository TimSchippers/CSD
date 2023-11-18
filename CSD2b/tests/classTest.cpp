#include <iostream>
#include <string>

class Instrument {
public:
  Instrument(std::string material, std::string iExciter) {
    materialSoundSource = material;
    exciter = iExciter;
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
