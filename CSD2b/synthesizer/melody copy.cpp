#include "melody.h"
#include "iostream"

Melody::Melody(float samplerate) : measure(0),index1(0),index2(0),samplerate(samplerate),frameIndex(0)
{};

Melody::~Melody()
{}

float Melody::updateNote()
{
    if(frameIndex >= noteDelay)
    {
        // reset frameIndex
        frameIndex = 0;
        if(index2 >= sizeof(melody[2])/sizeof(float)-1)
        {
            // std::cout << "if" << std::endl;
          measure++;
          index2 = 0;
        }
        else
        {
            if(measure >= 8){
                measure = 0;
                if(index1 >= 1){
                    index1 = 0;
                }
                else {
                index1++;
                }
            }
            index2++;
        }
        return melody[index1][index2];
	}
	else {
	      // increment frameindex
		// std::cout << index << std::endl;
		// std::cout << "else" << std::endl;
		frameIndex++;
		return melody[index1][index2];
	}
}

float Melody::getNote()
{
  // wrap index back to the beginning
  if(index2 >= sizeof(melody)/sizeof(float))
  {
    index2 = 0;
  }
  // index++ --> use value, then increment
  return melody[0][index2++];
}

void Melody::setNoteDelay(float seconds)
{
    this->noteDelay = seconds * samplerate;
}
