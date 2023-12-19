#include "saw.h"

Saw::Saw() : Oscillator()
{
        // std::cout << "Saw constructor" << std::endl;
}

Saw::~Saw()
{
        // std::cout << "Saw deconstructor" << std::endl;
}



float Saw::calculateSample(float phase){
    waveSample =  phase * 2.0 - 1.0;
    return waveSample;
}
