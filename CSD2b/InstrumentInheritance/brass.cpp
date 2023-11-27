#include "brass.h"

Brass::Brass(std::string name) : Instrument(name)
{
}

Brass::~Brass()
{
}

void Brass::play()
{
    std::cout << "toottoot" << std::endl;
}
