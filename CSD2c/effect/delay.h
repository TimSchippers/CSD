
#include "effect.h"

class Delay : public Effect
{
public:
    Delay();
    ~Delay();

    void prepare(float sampleRate) override;
    void write(float input);
    float read();

    void setReadH(int numSamplesDelay);
    void setDelayTime(float milliseconds);
    void setMaxDelayTime(float milliseconds);
    void setFeedbackAmount(float feedback);

private:
    float* buffer;
    int readH;
    int writeH;
    int size;
    int numSamplesDelay;
    float feedbackAmount;
    float sampleRate;
    float output;

    float applyEffect(float sample) override;
    inline void wrapHead(int& head) {
      if (head >= size) head -= size;
    }
};
