#include "instrument.h"


class Brass : public Instrument
{
public:
  Brass(std::string name);
  ~Brass();

  //methods
  void play();
};
