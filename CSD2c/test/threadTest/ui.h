/* UI code made  by Mark Groenewegen
 * Utility code for validating user input
 *
 * Available checks and queries:
 * - expected numeric
 * - value within range
 * - string selection
 */
#pragma once
#include <iostream>
#include <string>
#include "callback.h"
#include "queue.h"

class UI
{
public:
  UI(CustomCallback& callback);
  int retrieveUserSelection(std::string selectionOptions[], int numOptions);
  void addToQueue();
  Queue queue;
private:
  std::string retrieveUserInput(std::string selectionOptions[], int numOptions);
};
