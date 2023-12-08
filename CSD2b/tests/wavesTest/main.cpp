#include <iostream>
#include "writeToFile.h"
#include "triangle.h"

int const SAMPLERATE = 44100;


int main() {
  // create sine wave
  Triangle saw(220);
  saw.setSamplerate(SAMPLERATE);
  std::cout << "Oscillator frequency: " << saw.getFrequency() << "/n Samplerate = " << SAMPLERATE << std::endl;

  // write 1 second of samples to file
  // second parameter - overwrite is set to true
  WriteToFile fileWriter("output.csv", true);
  for(int i = 0; i < SAMPLERATE; i++) {
    fileWriter.write(std::to_string(saw.getSample()) + "\n");
    saw.tick();
  }

  // end of program
  return 0;
}
