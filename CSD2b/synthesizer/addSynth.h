#include "synth.h"

class AdditiveSynth : public Synthesizer
{
public:
    AdditiveSynth(float samplerate);
    ~AdditiveSynth();

    void tick();
};
