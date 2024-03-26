#include "ui.h"

UI::UI(CustomCallback &callback) : callback(callback) {}

std::string UI::retrieveUserInput(std::string selectionOptions[],
                                  int numOptions) {
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
    std::string parameterChangeOptions[] = {"rest", "ldt", "mdf", "ldf", "mdt",
                                            "d", "t",   "n",   "mrt", "lrt"};
    int numOptions = 10;
    int parameterChange =
        retrieveUserSelection(parameterChangeOptions, numOptions);
    if (parameterChange == 0) {
      running = false;
    } else if (parameterChange == 1) {
      callback.addToQueue(CustomCallback::ldt);
    } else if (parameterChange == 2) {
      callback.addToQueue(CustomCallback::mdf);
    } else if (parameterChange == 3) {
      callback.addToQueue(CustomCallback::ldf);
    } else if (parameterChange == 4) {
      callback.addToQueue(CustomCallback::mdt);
    } else if (parameterChange == 5) {
      callback.addToQueue(CustomCallback::d);
    } else if (parameterChange == 6) {
      callback.addToQueue(CustomCallback::t);
    } else if (parameterChange == 7) {
      callback.addToQueue(CustomCallback::n);
    } else if (parameterChange == 8) {
      callback.addToQueue(CustomCallback::mrt);
    } else if (parameterChange == 9) {
      callback.addToQueue(CustomCallback::lrt);
    }
  }
}
