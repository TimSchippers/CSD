#include "triangle.h"
#include <iostream>

Triangle::Triangle(float frequency) : Oscillator(frequency){
    std::cout << "triangle constructor" << std::endl;
}
Triangle::~Triangle()
{
    std::cout << "triangle deconstructor" << std::endl;
}



float Triangle::calculateSample(float phase){
    sample = phase * 4.0 - 1.0;
    if(phase >= 0.5) {
      sample = -phase * 4 + 3;
    }
    return sample;
}
