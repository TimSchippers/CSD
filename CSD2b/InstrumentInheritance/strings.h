#include "instrument.h"


class Strings : public Instrument
{
public:
  Strings(std::string name);
  ~Strings();

  //methods
  void play();
};
