#include "melody.h"
#include "iostream"

Melody::Melody(float samplerate) : index(0),samplerate(samplerate),frameIndex(0)
{};

Melody::~Melody()
{}

float Melody::updateNote()
{
    if(frameIndex >= noteDelay)
    {
        // reset frameIndex
        frameIndex = 0;
        if(index >= sizeof(melody)/sizeof(float)-1)
        {
            std::cout << "if" << std::endl;
          index = 0;
        }
        else
        {
            index++;
        }
        return melody[index];
	}
	else {
	      // increment frameindex
		std::cout << index << std::endl;
		std::cout << "else" << std::endl;
		frameIndex++;
		return melody[index];
	}
}

float Melody::getNote()
{
  // wrap index back to the beginning
  if(index >= sizeof(melody)/sizeof(float))
  {
    index = 0;
  }
  // index++ --> use value, then increment
  return melody[index++];
}

void Melody::setNoteDelay(float seconds)
{
    this->noteDelay = seconds * samplerate;
}
