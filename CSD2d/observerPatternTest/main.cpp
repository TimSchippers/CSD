#include <iostream>
#include <ostream>
#include <vector>
class Observer {
public:
  void update(){
    std::cout << "updated" << std::endl;
  }
};
class Subject {
public:
  Subject(){};
  ~Subject(){};

  void addObserver(Observer& observer){
    observerList.push_back(observer);
  }
  void notify(){
    // TODO range based for loop 
    for (int observer = 0; observer < observerList.size(); observer++) {
      observerList[observer].update();
    }
  };

private:
  std::vector<Observer> observerList;
};
int main() { return 0; }
