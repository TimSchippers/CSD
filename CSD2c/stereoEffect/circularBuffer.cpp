#pragma once

#include "circularBuffer.h"

CircularBuffer ::CircularBuffer(){};
CircularBuffer::CircularBuffer(int size)
    : size(size), indexReadHead(0), indexWriteHead(0) {
  buffer = (float *)malloc(size * sizeof(float));
  memset(buffer, 0, size * sizeof(float));
};
CircularBuffer::~CircularBuffer() { free(buffer); };

void CircularBuffer::setDistanceReadHead(int samples) {
  // TODO check if distance is smaller than size to catch error
  distance = samples;
  indexReadHead = indexWriteHead - distance;
  wrapHead(indexReadHead);
};

void CircularBuffer::setSize(int size) {
  // TODO check if size is bigger than num delaysamples to catch error
  free(buffer);
  buffer = (float *)malloc(size * sizeof(float));
  memset(buffer, 0, size * sizeof(float));
};
