#include "audioToFile.h"
#include "callback.h"
#include "jack_module.h"
#include "queue.h"
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
  Queue queue = Queue(callback);
#if WRITE_TO_FILE
  Queue queue;
  queue.addToQueue(Queue::mdf);
  queue.addToQueue(Queue::ldf);
  queue.addToQueue(Queue::mdf);
  queue.addToQueue(Queue::mdf);
  queue.addToQueue(Queue::ldf);
  queue.processQueue();
  queue.processQueue();
  queue.processQueue();
  queue.processQueue();
  queue.processQueue();
  // AudioToFile audioToFile;
  // audioToFile.write(callback);
#else
  jackModule.init(1, 2);

  bool running = true;
  while (running) {
    switch (std::cin.get()) {
    case 'q':
      running = false;
    case 'd':
      std::cout << "more delay" << std::endl;
      queue.addToQueue(Queue::mdt);
      queue.processQueue();
    }
  }
#endif
  // end the program
  return 0;
} // main()
