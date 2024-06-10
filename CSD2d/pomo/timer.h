#include <chrono>
#include <cstdlib>
#include <string>

class Timer {
public:
  Timer(int minutes) { prepare(minutes); }

  void prepare(int minutes) { countdownSeconds = minutes * 60; }

  enum State { workTimer, breakTimer };

  void start(State state) {
    if (changeable == true) {
      switch (state) {
      case State::workTimer:
        prepare(2);
        timerStartTime = getCurrentTime();
        running = true;
        changeable = false;
        break;
      case State::breakTimer:
        prepare(1);
        timerStartTime = getCurrentTime();
        mute = true;
        running = true;
        changeable = false;
        break;
      }
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
      if (countdownSeconds <= 0) {
        changeable = true;
        // TODO notify when need to break
      }
    }
  }

  float muteWhenBreak(float input) {
    if (mute == true) {
      return 0;
    } else {
      return input;
    }
  }

  std::string getMinutes() {
    if (countdownSeconds / 60 < 10) {
      return "0" + std::to_string(abs(countdownSeconds / 60));
    } else {
      return std::to_string(abs(countdownSeconds / 60));
    }
  }

  std::string getSeconds() {
    if (countdownSeconds % 60 < 10) {
      return "0" + std::to_string(abs(countdownSeconds % 60));
    } else {
      return std::to_string(abs(countdownSeconds % 60));
    }
  }

private:
  bool mute = false;
  bool running = false;
  bool changeable = true;
  float elapsedMillis;
  float elapsedSeconds;
  int countdownSeconds;
  std::chrono::time_point<std::chrono::steady_clock,
                          std::chrono::duration<float>>
      timerStartTime;

  static std::chrono::time_point<std::chrono::steady_clock,
                                 std::chrono::duration<float>>
  getCurrentTime() {
    return std::chrono::steady_clock::now();
  }

  // hide the default constructor
  Timer();
};
