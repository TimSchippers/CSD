#include <cmath>

class Synthesizer
{
public:
    Synthesizer(float samplerate);
    ~Synthesizer();
    void tick();
    void setSamplerate(float samplerate);
    float getOutput();

private:
    float phase;
    const float pi = acos(-1);

    float samplerate;
    float sample;
    long sampleStep;
    float sampleStepSize;
    float frequency;
    float volume;
    float output;

    float mtof(float midiNote);

};
