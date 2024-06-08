#include <chrono>
#include <iostream>
#include <ostream>

static std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<float> > getCurrentTime() { return std::chrono::steady_clock::now(); }

int main() {
  auto programStartTime = getCurrentTime();
  int seconds = 0;
  int timerTime = 30 * 60;

  while (true) {
    float elapsedMillis = (getCurrentTime() - programStartTime).count() - seconds;
    if (elapsedMillis >= 1.0f) {
      seconds++;
      timerTime--;
      if (timerTime == 0) {
        auto totalTime = getCurrentTime() - programStartTime;
        std::cout << "run time = " << std::chrono::duration_cast<std::chrono::milliseconds>(totalTime).count() << std::endl;
        return 0;
      }
      std::cout << seconds << " " << elapsedMillis << std::endl;
    }
    
  }
}
