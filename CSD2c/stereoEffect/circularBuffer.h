#pragma once

#include <algorithm>
#include <iostream>
#include <iterator>

class CircularBuffer {
public:
  CircularBuffer();
  CircularBuffer(int size);
  ~CircularBuffer();

  inline void write(float sample) {
    buffer[indexWriteHead++] = sample;
    wrapHead(indexWriteHead);
  };

  inline float read() {
    float signal = buffer[indexReadHead];
    indexReadHead++;
    wrapHead(indexReadHead);
    return signal;
  };

  // setters
  void setDistanceReadHead(int samples);
  void setSize(int size);

private:
  inline void wrapHead(int &head) {
    if (head >= size)
      head -= size;
    else if (head < 0)
      head += size;
  }

  int indexWriteHead;
  int indexReadHead;

  int size;
  int distance;

  float *buffer;
};
