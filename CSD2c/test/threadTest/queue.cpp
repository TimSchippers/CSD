#include "queue.h"
#include "callback.h"
#include <iostream>
#include <ostream>

Queue::Queue(CustomCallback &callback) : callback(callback) {}
void Queue::addToQueue(ParameterChanges parameterChanges) {
  thisQueue.push(parameterChanges);
};

void Queue::processQueue() {
  if (thisQueue.empty()) {
  } else {
    switch (thisQueue.front()) {
    case ParameterChanges::mdt: {
      std::cout << "more delay time" << std::endl;
      float newDelayTime = callback.getDelayTime() + 50;
      callback.setDelayTime(newDelayTime);
      thisQueue.pop();
      break;
    }
    case ParameterChanges::ldt: {
      std::cout << "less delay time" << std::endl;
      float newDelayTime = callback.getDelayTime() - 50;
      callback.setDelayTime(newDelayTime);
      thisQueue.pop();
      break;
    }
    case ParameterChanges::mdf: {
      std::cout << "more feedback" << std::endl;
      float newFeedbackAmount = callback.getDelayFeedback() + 0.05;
      callback.setDelayFeedback(newFeedbackAmount);
      thisQueue.pop();
      break;
    }
    case ParameterChanges::ldf: {
      std::cout << "less feedback" << std::endl;
      float newFeedbackAmount = callback.getDelayFeedback() - 0.05;
      callback.setDelayFeedback(newFeedbackAmount);
      thisQueue.pop();
      break;
    }
    default:
      throw "invalid input";
      break;
    }
  }
};
