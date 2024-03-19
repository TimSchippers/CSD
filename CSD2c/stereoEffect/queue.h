#include <queue>

class Queue {
public:
  enum ParameterChanges {
    mdt, // more delay time
    ldt, // less delay tim
    mdf, // more delay feedback
    ldf, // less delay feedback
  };

  void addToQueue(ParameterChanges parameterChanges);
  void processQueue();

private:
  std::queue<ParameterChanges> thisQueue;
};
