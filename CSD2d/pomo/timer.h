#include <chrono>
#include <string>

class Timer {
public:
  Timer(int minutes) { prepare(minutes); }

  void prepare(int minutes) { countdownSeconds = minutes * 60; }

  void start() {
    if (running == false) {
      timerStartTime = getCurrentTime();
      running = true;
    }
  }

  void clockTick() {
    if (running == true) {
      elapsedMillis =
          (getCurrentTime() - timerStartTime).count() - elapsedSeconds;
      if (elapsedMillis >= 1.0f) {
        elapsedSeconds++;
        countdownSeconds--;
      }
    }
  }

  float muteWhenBreak(float input) {
    if (isBreak == true) {
      return 0;
    } else {
      return input;
    }
  }

  // TODO add if >10 display as 05:05 now its just 5:5
  std::string getMinutes() { return std::to_string(countdownSeconds / 60); }
  std::string getSeconds() { return std::to_string(countdownSeconds % 60); }

private:
  bool isBreak = false;
  bool running = false;
  float elapsedMillis;
  float elapsedSeconds;
  std::chrono::time_point<std::chrono::steady_clock,
                          std::chrono::duration<float>>
      timerStartTime;

  int countdownSeconds;

  static std::chrono::time_point<std::chrono::steady_clock,
                                 std::chrono::duration<float>>
  getCurrentTime() {
    return std::chrono::steady_clock::now();
  }

  // hide the default constructor
  Timer();
};
