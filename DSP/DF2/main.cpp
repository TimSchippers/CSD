#include "circularBuffer.h"
#include <iostream>

CircularBuffer buffer1;
float sample;

int main() {
  buffer1.setSize(8);
  buffer1.setDistanceReadHead(8);

  for (int i = 0; i < 25; i++) {
    if (i == 0) {
      sample = 1;
    } else {
      sample = 0;
    }
    float buffer1out = buffer1.read();
    float output =
        (((buffer1out * 0.1678) + sample) * 0.1678) + (buffer1out * -1);
    buffer1.write((buffer1out * 0.1678) + sample);
    std::cout << i << ": " << output << std::endl;
  }
  return 0;
}
