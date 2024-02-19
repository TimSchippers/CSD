#pragma once

class Effect
{
public:
  Effect();
  virtual ~Effect();
  void processFrame(float input);
  virtual void prepare(int sampleRate);

  // setters
  void setDryWet(float dryWet);

protected:
  virtual float applyEffect(float input);

private:
    float dryVolume;
    float wetVolume;
};
