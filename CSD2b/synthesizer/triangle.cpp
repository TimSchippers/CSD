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
    waveSample = phase * 4.0 - 1.0;
    if(phase >= 0.5) {
      waveSample = -phase * 4 + 3;
    }
    return waveSample;
}
