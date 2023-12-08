#include "saw.h"

Saw::Saw(float frequency) : Oscillator(frequency){

}
Saw::~Saw(){}



float Saw::calculateSample(float phase){
    sample =  phase * 2.0 - 1.0;
    return sample;
}
