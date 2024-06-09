#include <chrono>
#include <string>

class Timer {
public:
  Timer(int minutes) { prepare(minutes); }
  void prepare(int minutes) { countdownSeconds = minutes * 60; }
  std::string getMinutes() { return std::to_string(countdownSeconds / 60); }
  std::string getSeconds() { return std::to_string(countdownSeconds % 60); }

private:
  float elapsedMillis;
  float elapsedSeconds;
  int countdownSeconds;


  static std::chrono::time_point<std::chrono::steady_clock,
                                 std::chrono::duration<float>>
  getCurrentTime() {
    return std::chrono::steady_clock::now();
  }

  // hide the default constructor
  Timer();
};
