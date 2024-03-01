#include "writeToFile.h"
#include "math.h"

#define SAMPLE_RATE 44100


class FIR
{
    public:
        FIR()
        {
            buffer = 0.f;
        }
        float process(float input)
        {
            output = 0.5f * input  - 0.5f* buffer2;
            buffer2= buffer;
            buffer = input;
            return output;
        }
    private:
        float output;
        float buffer;
        float buffer2;
};


int main()
{
    FIR filter;


    float frequency = 1;

    WriteToFile fileWriter("output.csv", true);
    for (int i = 0; i < SAMPLE_RATE/2; i += 200){
        for (int j = 0; j < SAMPLE_RATE; j++)
        {
            float sample = sin(2 * M_PI * i * j / SAMPLE_RATE);
            fileWriter.write(std::to_string(filter.process(sample)) + "\n");
        };
    }
}
