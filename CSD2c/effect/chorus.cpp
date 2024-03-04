#include "chorus.h"

Chorus::Chorus() : sine(){};
Chorus::~Chorus() { delete buffer; }

void Chorus::prepare(float sampleRate) {
  this->sampleRate = sampleRate;
  setMaxDelayTime(2000);
  setFeedbackAmount(0.2);
  buffer = new float[size];
  for (int i = 0; i < size; i++) {
    buffer[i] = 0.f;
  }
  setDelayTime(1000);
  std::cout << size << ", " << numSamplesDelay << std::endl;
}
void Chorus::write(float input) {
  buffer[writeH] = input;
  writeH++;
  wrapHead(writeH);
}
float Chorus::read() {
  output = buffer[readH];
  readH++;
  wrapHead(readH);
  return output;
}

void Chorus::setReadH(int numSamplesDelay) {
  readH = writeH + size - numSamplesDelay;
  wrapHead(readH);
}

void Chorus::setDelayTime(float milliseconds) {
  // TODO time only between chorus delay time
  numSamplesDelay = sampleRate * (milliseconds / 1000);
  // TODO check if Time exceeds buffer
  setReadH(numSamplesDelay);
}

void Chorus::setMaxDelayTime(float milliseconds) {
  if (size < numSamplesDelay) {
    throw "this is smaller than the DelayTime";
  }
  // TODO check if buffersize is smaller then the current delay time
  size = sampleRate * (milliseconds / 1000);
}

float Chorus::applyEffect(float sample) {
  output = read();
  write(sample + (output));
  return output;
}
