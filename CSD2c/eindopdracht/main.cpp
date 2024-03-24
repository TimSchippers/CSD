#include "audioToFile.h"
#include "callback.h"
#include "jack_module.h"
#include "ui.h"
#include <iostream>
#include <thread>

/*
 * NOTE: jack2 needs to be installed
 * jackd invokes the JACK audio server daemon
 * https://github.com/jackaudio/jackaudio.github.com/wiki/jackd(1)
 * on mac, you can start the jack audio server daemon in the terminal:
 * jackd -d coreaudio
 */

#define WRITE_TO_FILE 0


int main(int argc, char **argv) {
  auto callback = CustomCallback{};
  auto jackModule = JackModule{callback};
  auto ui = UI(callback);
#if WRITE_TO_FILE
  callback.addToQueue(CustomCallback::ParameterChanges::mdt);
  callback.addToQueue(CustomCallback::ParameterChanges::ldt);
  callback.addToQueue(CustomCallback::ParameterChanges::mdt);
  callback.addToQueue(CustomCallback::ParameterChanges::mdt);
  callback.addToQueue(CustomCallback::ParameterChanges::ldt);
  callback.processQueue();
  callback.processQueue();
  callback.processQueue();
  callback.processQueue();
  callback.processQueue();
  // AudioToFile audioToFile;
  // audioToFile.write(callback);
#endif
   jackModule.init(1, 2);
   ui.addToQueue();

  //std::thread thread1(&JackModule::init, &jackModule, 1, 2);
  //std::thread thread2(&UI::addToQueue, &ui);

  //thread1.join();
  //thread2.join();

  // end the program
  return 0;
} // main()
