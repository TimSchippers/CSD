#include "sine.h"
#include "oscillator.h"

Sine::Sine(float frequency) : Oscillator(frequency){

}
Sine::~Sine(){}



float Sine::calculateSample(float phase){
    sample = sin(pi * 2 * phase);
    return sample;
}
