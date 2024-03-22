#include <queue>
#include "callback.h"

class Queue {
public:
  Queue(CustomCallback& callback);
  enum ParameterChanges {
    mdt, // more delay time
    ldt, // less delay tim
    mdf, // more delay feedback
    ldf, // less delay feedback
    SIZE,
  };

  void addToQueue(ParameterChanges parameterChanges);
  void processQueue();

private:
  CustomCallback callback;
  std::queue<ParameterChanges> thisQueue;
  int size;
};
