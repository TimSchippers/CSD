#include <iostream>
#include "writeToFile.h"
#include "sine.h"

int const SAMPLERATE = 44100;


int main() {
  // create sine wave
  Sine sine(220);
  sine.setSamplerate(SAMPLERATE);
  std::cout << "Oscillator frequency: " << sine.getFrequency() << "/n Samplerate = " << SAMPLERATE << std::endl;

  // write 1 second of samples to file
  // second parameter - overwrite is set to true
  WriteToFile fileWriter("output.csv", true);
  for(int i = 0; i < SAMPLERATE; i++) {
    fileWriter.write(std::to_string(sine.getSample()) + "\n");
    sine.tick();
  }

  // end of program
  return 0;
}
