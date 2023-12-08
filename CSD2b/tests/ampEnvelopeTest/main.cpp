#include <iostream>
#include "synth.cpp"
#include "writeToFile.h"

const int SAMPLERATE = 44100;


int main() {
  // create sine wave
  Synth synth;
  synth.setSamplerate(SAMPLERATE);
  //std::cout << "Synth frequency: " << synth.getFrequency() << "\n";

  // write 1 second of samples to file
  // second parameter - overwrite is set to true
  WriteToFile fileWriter("output.csv", true);
  for(int i = 0; i < SAMPLERATE; i++) {
    fileWriter.write(std::to_string(synth.getSample()) + "\n");
    synth.tick();
  }

  // end of program
  return 0;
}
