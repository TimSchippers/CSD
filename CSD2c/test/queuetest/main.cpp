#include <iostream>
#include <thread>
#include "queue.h"

/*
 * NOTE: jack2 needs to be installed
 * jackd invokes the JACK audio server daemon
 * https://github.com/jackaudio/jackaudio.github.com/wiki/jackd(1)
 * on mac, you can start the jack audio server daemon in the terminal:
 * jackd -d coreaudio
 */


int main(int argc, char **argv) {
  Queue queue; 
  queue.addToQueue(Queue::ldf);
  queue.addToQueue(Queue::ldt);
  queue.addToQueue(Queue::mdf);
  queue.addToQueue(Queue::mdt);
  queue.addToQueue(Queue::mdt);
  queue.processQueue();
  queue.processQueue();
  queue.processQueue();
  queue.processQueue();
  queue.processQueue();
  // end the program
  return 0;
} // main()
