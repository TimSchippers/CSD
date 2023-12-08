#include "saw.h"
#include "oscillator.h"

Saw::Saw(float frequency) : Oscillator(frequency){

}
Saw::~Saw(){}



float Saw::calculateSample(float phase){
    sample =  phase * 2 - 1;
    return sample;
}
