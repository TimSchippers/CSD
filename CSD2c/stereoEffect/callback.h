#ifndef CALLBACK_H
#define CALLBACK_H

#include "jack_module.h"

class CustomCallback : public AudioCallback {
public:
  void prepare(int rate) override;
  void process(AudioBuffer buffer) override;

private:
};

#endif // CALLBACK_H
