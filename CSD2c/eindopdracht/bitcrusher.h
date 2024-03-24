#pragma once
#include <math.h>
#include <iostream>
#include "effect.h"

// bitcrusher made by Jari Deelstra
// bitcrusher calculations from pirkle

class Bitcrusher : public Effect {
public:
    Bitcrusher() {
    }

    ~Bitcrusher(){}

    void prepare(int samplerate) override {
    }

    void setBitDepth(float bitDepth) {
        this->bitDepth = 8.0 / (pow(8.0, bitDepth) -1.0);
        std::cout << this->bitDepth << std::endl;
    }

    void applyEffect(const float &input, float &output, int channel) override {
//        std::cout << "Input: " << input << std::endl;
        output = bitDepth * static_cast<int>(input/ bitDepth);
//        std::cout << "Output: " << output << std::endl;
    }

private:
    float bitDepth;
};
