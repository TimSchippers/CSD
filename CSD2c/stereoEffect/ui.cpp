#include "ui.h"

UI::UI(CustomCallback& callback) :callback(callback){}

std::string UI::retrieveUserInput(std::string selectionOptions[],
                                  int numOptions) {
  // show user the allowed options
  std::cout << "Please enter your selection. You can choose from: ";
  for (int i = 0; i < numOptions - 1; i++) {
    std::cout << selectionOptions[i] << ", ";
  }
  // print last option outside forloop to end with an .
  std::cout << selectionOptions[numOptions - 1] << "." << std::endl;
  // retrieve and return choice
  std::string selection = "";
  std::cin >> selection;
  return selection;
}

int UI::retrieveUserSelection(std::string selectionOptions[], int numOptions) {
  std::string selection = "";
  while (true) {
    // let user choose from the allowed options
    selection = retrieveUserInput(selectionOptions, numOptions);

    // check if the selection is among the available option
    for (int i = 0; i < numOptions; ++i) {
      if (selection == selectionOptions[i]) {
        return i;
      }
    }
    // if we end up here, this means the selection is not correct,
    // so log a message to user to try again
    std::cout << "Incorrect selection, please try again";
  }          // while
  return -1; // should never be reached
};           // retrieveUserSelection()

void UI::addToQueue() {
  bool running = true;
  while (running) {
    std::string parameterChangeOptions[] = {"mdt", "ldt", "mdf", "ldf", "q"};
    int numOptions = 5;
    int parameterChange =
        retrieveUserSelection(parameterChangeOptions, numOptions);
    if (parameterChange == 0) {
      callback.addToQueue(CustomCallback::mdt);
    } else if (parameterChange == 1) {
      callback.addToQueue(CustomCallback::ldt);
    } else if (parameterChange == 2) {
      callback.addToQueue(CustomCallback::mdf);
    } else if (parameterChange == 3) {
      callback.addToQueue(CustomCallback::ldf);
    } else if (parameterChange == 4) {
      running = false;
    }
    //callback.processQueue();
  }
}
