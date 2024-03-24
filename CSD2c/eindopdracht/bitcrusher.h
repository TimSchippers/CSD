#pragma once
#include <math.h>
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

    void setBitDepth(float bitDepth) ;

    void applyEffect(const float &input, float &output, int channel) override ;

private:
    float bitDepth;
};
