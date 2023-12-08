#include <cmath>
class Synth {
public:
    Synth():sampleStep(0),samplerate(44100),sample(0),phase(0),frequency(220),amplitude(1),attack(0.5){};
    ~Synth(){};

    void setSamplerate(int samplerate){this->samplerate = samplerate;}
    int getSamplerate(){return samplerate;}
    float getSample(){return sample;}
    float calculateSine(float phase){
        sample = sin(pi*2*phase)*amplitude;
        return sample;
    }
    float calculateEnvelope(float waveSample, float attack, float time){
        sample = waveSample * time / attack;
        if(time >= attack){
            sample = waveSample;
        }
        return sample;
    }
    void tick()
    {
        sampleStep+= sampleSize;
        if(sampleStep >= samplerate){
            sampleStep -= samplerate;
            seconds += 1;
        }
        time = seconds + sampleStep;
        phase += frequency / samplerate;
        if(phase > 1.0f) {
            phase -= 1.0f;
        }

        waveSample = calculateSine(phase);// calculate from oscillator
        sample = calculateEnvelope(waveSample,attack,time); // calculate from amplifier
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
    float time;
    float attack;
    const float pi = acos(-1);

};
