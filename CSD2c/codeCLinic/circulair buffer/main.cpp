#include "circulaireBuffer.h"
#include "iostream"

float inputBuffer[8] = {1.f, 2.f, 3.f, 4.f, 5.f, 6.f, 7.f, 8.f};
CircBuffer delay(8, 2);

int main() {
  for (int i = 0; i < 10; i++) {
    std::cout << inputBuffer[i] << std::endl;
    delay.write(inputBuffer[i]);
    float output = delay.read();
    std::cout << output << std::endl;
  }

  return 0;
}
