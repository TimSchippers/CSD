#include "queue.h"
#include <iostream>
#include <ostream>

void Queue::addToQueue(ParameterChanges parameterChanges) {
  thisQueue.push(parameterChanges);
};
void Queue::processQueue() {
  switch (thisQueue.front()) {
  case ParameterChanges::mdt: {
    std::cout << "more delay time" << std::endl;
    thisQueue.pop();
    break;
  }
  case ParameterChanges::ldt: {
    std::cout << "less delay time" << std::endl;
    thisQueue.pop();
    break;
  }
  case ParameterChanges::mdf: {
    std::cout << "more feedback" << std::endl;
    thisQueue.pop();
    break;
  }
  case ParameterChanges::ldf: {
    std::cout << "less feedback" << std::endl;
    thisQueue.pop();
    break;
  }
  default:
    throw "invalid input";
    break;
  }
};
