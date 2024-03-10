#include "circularBuffer.h"

CircularBuffer ::CircularBuffer() : CircularBuffer(256){};
CircularBuffer::CircularBuffer(int size)
    : indexWriteHead(0), indexReadHead(0), size(size) {
  buffer = new float[size];
  for (int i = 0; i < size; i++) {
    buffer[i] = 0.0f;
  }
  // buffer = (float *)malloc(size * sizeof(float));
  // memset(buffer, 0, size * sizeof(float));
};
CircularBuffer::~CircularBuffer() { free(buffer); };

void CircularBuffer::setDistanceReadHead(int samples) {
  // TODO check if distance is smaller than size to catch error
  distance = samples;
  indexReadHead = indexWriteHead - distance;
  wrapHead(indexReadHead);
  // std::cout << "index read " << indexReadHead << " index write "<<
  // indexWriteHead << std::endl;
};

void CircularBuffer::setSize(int size) {
  // TODO check if size is bigger than num delaysamples to catch error
  free(buffer);
  this->size = size;
  std::cout << "setting max delay time in " << size << " samples" << std::endl;
  // buffer = (float *)malloc(size * sizeof(float));
  // memset(buffer, 0, size * sizeof(float));
  buffer = new float[size];
  for (int i = 0; i < size; i++) {
    buffer[i] = 0;
  }
};
