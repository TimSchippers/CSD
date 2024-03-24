#include "bitcrusher.h"

void Bitcrusher::setBitDepth(float bitDepth) {
  this->bitDepth = 8.0 / (pow(8.0, bitDepth) - 1.0);
}

void Bitcrusher::applyEffect(const float &input, float &output, int channel) {
  output = bitDepth * static_cast<int>(input / bitDepth);
}
