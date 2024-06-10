#include <chrono>
#include <string>

class Timer {
public:
  Timer(int minutes) { prepare(minutes); }

  void prepare(int minutes) {
    countdownSeconds = minutes * 60;
    elapsedMillis = 0;
    elapsedSeconds = 0;
  }

  enum State { workTimer, breakTimer };

  void start(State state) {
    switch (state) {
    case State::workTimer:
      prepare(1);
      // this is for a quick demonstration
      countdownSeconds -= 45;
      timerStartTime = getCurrentTime();
      running = true;
      mute = false;
      isBreak = false;
      overtime = false;
      break;
    case State::breakTimer:
      prepare(1);
      // this is for a quick demonstration
      countdownSeconds -= 47;
      timerStartTime = getCurrentTime();
      mute = true;
      running = true;
      isBreak = true;
      overtime = false;
      break;
    }
  }

  void giveUp() {
    running = false;
    mute = false;
    prepare(2);
  }

  void clockTick() {
    if (running == true) {
      elapsedMillis =
          (getCurrentTime() - timerStartTime).count() - elapsedSeconds;
      if (elapsedMillis >= 1.0f) {
        elapsedSeconds++;
        countdownSeconds--;
      }
      // TODO change "notification: to shorter on/off
      if (countdownSeconds <= 0) {
        overtime = true;
        mute = true;
      }
      if (countdownSeconds <= -1 && isBreak == false) {
        mute = false;
      }
      if (countdownSeconds <= -2 && isBreak == false) {
        mute = true;
      }
      if (countdownSeconds <= -3 && isBreak == false) {
        mute = false;
      }
      if (countdownSeconds <= -10 && isBreak == false) {
        start(State::breakTimer);
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
    if (countdownSeconds / 60 > -10 && countdownSeconds / 60 < 10) {
      return "0" + std::to_string(abs(countdownSeconds / 60));
    } else {
      return std::to_string(abs(countdownSeconds / 60));
    }
  }

  std::string getSeconds() {
    if (countdownSeconds % 60 > -10 && countdownSeconds % 60 < 10) {
      return "0" + std::to_string(abs(countdownSeconds % 60));
    } else {
      return std::to_string(abs(countdownSeconds % 60));
    }
  }

  bool getRunning() { return running; }
  bool getIsBreak() { return isBreak; }

  bool overtime = false;

private:
  bool mute = false;
  bool running = false;
  bool isBreak = false;
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
