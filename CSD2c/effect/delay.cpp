  #include "delay.h"

  Delay::Delay()
  {
  };
  Delay::~Delay()
  {
      delete buffer;
  };

  void Delay::prepare(float sampleRate)
  {
      this->sampleRate = sampleRate;
      setMaxDelayTime(2000);
      buffer = new float[size];
      for (int i = 0; i < size; i++)
      {
         buffer[i] = 0.f;
      }
      setDelayTime(1000);
      std::cout << size << ", " << numSamplesDelay << std::endl;
  };
  void Delay::write(float input)
  {
      buffer[writeH] = input;
      writeH++;
      wrapHead(writeH);
  };
  float Delay::read()
  {
      output = buffer[readH];
      readH++;
      wrapHead(readH);
      return output;
  };

  void Delay::setReadH(int numSamplesDelay)
  {
      readH = writeH + size - numSamplesDelay;
      wrapHead(readH);
  };

  void Delay::setDelayTime(float milliseconds)
  {
      numSamplesDelay = sampleRate * (milliseconds/1000);
      if (numSamplesDelay > size) {throw "this is bigger than the maxDelaySize";}
      setReadH(numSamplesDelay);
  };

  void Delay::setMaxDelayTime(float milliseconds)
  {
      if (size < numSamplesDelay) {throw "this is smaller than the DelayTime";}
      else {
      size = sampleRate * (milliseconds/1000);
      }
  };

  float Delay::applyEffect(float sample)
  {
      output = read();
      write(sample);
      return output;
  };
