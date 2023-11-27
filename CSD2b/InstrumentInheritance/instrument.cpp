#include "instrument.h"

Instrument::Instrument(std::string name)
{
  std::cout << name << " walks on stage" << std::endl;
  this->name = name;
}

Instrument::~Instrument()
{
  std::cout << name << " walks off the stage" << std::endl;
}

void Instrument::play()
{
    std::cout << name << " is playing" << std::endl;
}
