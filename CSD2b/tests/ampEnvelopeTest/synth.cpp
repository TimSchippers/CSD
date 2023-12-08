#include <cmath>
class Synth {
public:
    Synth():sampleStep(0),samplerate(44100),frequency(220),amplitude(1),phase(0),sample(0){};
    ~Synth(){};

    void setSamplerate(int samplerate){this->samplerate = samplerate;}
    int getSamplerate(){return samplerate;}
    float getSample(){return sample;}
    void tick()
    {
        sampleStep+= sampleSize;
        if(sampleStep >= samplerate){
            sampleStep -= samplerate;
            seconds += 1;
        }
        phase += frequency / samplerate;
        if(phase > 1.0f) {
            phase -= 1.0f;
        }

        waveSample = sin(pi*2*phase); // calculate from oscillator
        sample = waveSample*amplitude; // calculate from amplifier
    }

    //make oscillator
    //make amplifier with envelope

private:
    int seconds;
    float sampleStep;
    float samplerate;
    float sampleSize = 1/samplerate;
    float sample;
    float phase;
    float frequency;
    float amplitude;
    float waveSample;
    const float pi = acos(-1);

};
