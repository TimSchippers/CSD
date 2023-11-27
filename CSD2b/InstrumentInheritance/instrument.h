#include <iostream>

class Instrument
{
public:
  Instrument(std::string name);
  ~Instrument();
  // methods
  void play();

protected:
  std::string name;
};
