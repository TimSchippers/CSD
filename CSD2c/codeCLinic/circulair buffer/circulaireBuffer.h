#include "iostream"

class CircBuffer {
public:
  CircBuffer(int size, int numSamplesDelay);
  ~CircBuffer();

  float *buffer;
  int readH;
  int writeH;

  void write(float input);
  float read();

  void setReadH();

  int size;
  int numSamplesDelay;
  float output;
};
