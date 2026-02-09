#include <iostream>
#include <string>
#include "inc/InputHandler.h"
#include "inc/Garbage.h"

static std::string newLineCharacter = "$ ";

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  InputHandler* inputHandler = InputHandler::getInstance();

  while (!inputHandler->isKilled()) {
    std::cout << newLineCharacter;
    std::string input;
    std::getline(std::cin, input);
    inputHandler->readCommand(input);
  }

  destroy();


}
