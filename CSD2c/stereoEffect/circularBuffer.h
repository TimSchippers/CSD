#pragma once

#include <iostream>

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
    return buffer[indexWriteHead++];
    wrapHead(indexReadHead);
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