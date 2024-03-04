#pragma once

class Effect {
public:
  Effect();
  virtual ~Effect();

  void processSignal(const float &input, float &output, int channel);

  // setters
  void setDryWet(float dryWet);

protected:
  virtual void applyEffect(const float &input, float &output, int channel) = 0;

private:
  float dryVolume;
  float wetVolume;
};