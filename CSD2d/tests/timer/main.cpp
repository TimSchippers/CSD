// code found on https://www.delftstack.com/howto/cpp/cpp-countdown-timer/

#include <ctime>
#include <iostream>
#include <string>
#include <unistd.h>

static std::string getPresentDateTime() {
  std::time_t tt;
  struct tm *st;

  time(&tt);
  st = localtime(&tt);
  return asctime(st);
}
int main() {
  int seconds = 13;

  while (seconds >= 0) {
    std::cout << "Counter : " << seconds << " : " + getPresentDateTime()
              << std::endl;
    usleep(1000000);
    seconds--;
  }

  return 0;
}
