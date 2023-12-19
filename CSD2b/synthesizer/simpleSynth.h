#include "synth.h"

class SimpleSynth : public Synthesizer
{
public:
    SimpleSynth(float samplerate,int waveformSelection);
    ~SimpleSynth();

    void tick();
    void setChoice(int choiceInt);
    void setDetune(float detune);
private:
    int waveformSelection = 2;
    float detune = 0;
};
