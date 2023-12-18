#include "triangle.h"

Triangle::Triangle() : Oscillator()
{
    std::cout << "triangle constructor" << std::endl;
}

Triangle::~Triangle()
{
    std::cout << "triangle deconstructor" << std::endl;
}



float Triangle::calculateSample(float phase)
{
    // std::cout << "debug b" << std::endl;
    waveSample = phase * 4.0 - 1.0;
    if(phase >= 0.5) {
      waveSample = -phase * 4 + 3;
    }
    return waveSample;
}

void Triangle::testWatErGebeurt() {
    std::cout << "dit is wat er gebeurt" << std::endl;
}
