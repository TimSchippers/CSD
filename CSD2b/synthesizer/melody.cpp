#include "melody.h"

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
		frameIndex++;
		return melody[index];
	}
}


void Melody::setNoteDelay(float seconds)
{
    this->noteDelay = seconds * samplerate;
}
