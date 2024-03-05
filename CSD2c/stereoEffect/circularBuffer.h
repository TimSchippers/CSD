#pragma once

#include <algorithm>
#include <iostream>
#include <iterator>
#include <ostream>

class CircularBuffer {
public:
  CircularBuffer();
  CircularBuffer(int size);
  ~CircularBuffer();

  void write(float sample) {
    buffer[indexWriteHead++] = sample;
    // std::cout<<buffer[indexWriteHead-1]<<std::endl;
    wrapHead(indexWriteHead);
  };
  float read() {
    float signal = buffer[indexReadHead];
    indexReadHead++;
    std::cout<<signal<<std::endl;
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
