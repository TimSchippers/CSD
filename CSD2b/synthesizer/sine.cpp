#include "sine.h"

Sine::Sine() : Oscillator()
{
    // std::cout << "Sine Constructor" << std::endl ;
}

Sine::~Sine()
{
    // std::cout << "Sine Deconstructor" << std::endl;
}



float Sine::calculateSample(float phase){
    waveSample = sin(pi * 2 * phase);
    return waveSample;
}
