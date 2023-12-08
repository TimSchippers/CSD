#include "triangle.h"
#include "oscillator.h"

Triangle::Triangle(float frequency) : Oscillator(frequency){

}
Triangle::~Triangle(){}



float Triangle::calculateSample(float phase){
    sample = phase * 4.0 - 1.0;
    if(phase >= 0.5) {
      sample = -phase * 4 + 3;
    }
    return sample;
}
