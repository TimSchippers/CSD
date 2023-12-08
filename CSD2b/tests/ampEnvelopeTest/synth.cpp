class Synth {
public:
    Synth(){};
    ~Synth(){};

    void setSamplerate(int samplerate){this->samplerate = samplerate;}
    float getSample(){return sample;}
    void tick()
    {
        phase += frequency / samplerate;
        if(phase > 1.0f) {
            phase -= 1.0f;
            }
        waveSample = 0; // calculate from oscillator
        sample = 0; // calculate from amplifier
    }

    //make oscillator
    //make amplifier with envelope

private:
    float samplerate;
    float sample;
    float phase;
    float frequency;
    float waveSample;

};
