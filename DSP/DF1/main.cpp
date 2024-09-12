#include "circularBuffer.h"
#include <iostream>

CircularBuffer buffer1;
CircularBuffer buffer2;
float sample;

int main() {
  buffer1.setSize(8);
  buffer2.setSize(8);
  buffer1.setDistanceReadHead(8);
  buffer2.setDistanceReadHead(8);

  for (int i = 0; i < 25; i++) {
    if (i == 0) {
      sample = 1;
    } else {
      sample = 0;
    }
    float buffer1out = buffer1.read();
    float buffer2out = buffer2.read();
    float output = sample * 0.1678 + buffer1out * 0.1678 + buffer2out * -1;
    buffer1.write(((sample + buffer1out) * 0.1678) + (buffer2out * -1));
    buffer2.write(sample);
    std::cout << i << ": " << output << std::endl;
  }
  return 0;
}
