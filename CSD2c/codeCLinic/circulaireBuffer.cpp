#include "circulaireBuffer.h"

CircBuffer::CircBuffer(int size, int numSampleDelay) : size(size), numSamplesDelay(numSampleDelay), readH(0), writeH(0)
{
    // buffer = (float*)malloc(size * sizeof(float));
    buffer = new float[size];
    for (int i = 0; i < size; i++)
    {
       buffer[i] = 0.f;
    }
    setReadH();
    std::cout << writeH << ", " << readH << std::endl;
}


CircBuffer::~CircBuffer(){};

void CircBuffer::write(float input)
{
    buffer[writeH] = input;
    writeH++;
    if (writeH >= size)
        {
            writeH -= size;
        }
}

float CircBuffer::read()
{

    output = buffer[readH];
    readH++;
    if (readH >= size)
        {
            readH -= size;
        }
    return output;
}

void CircBuffer::setReadH()
{
    readH = writeH + size - numSamplesDelay;
    if (readH >= size)
        {
            readH -= size;
        }
}
