#include <iostream>
#include <string>
#include <cstdlib>
#include "../lib/inc/input/InputHandler.h"
#include "../lib/inc/garbage/Garbage.h"

static std::string newLineCharacter = "$ ";

int main() {

  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;
  const char* path = std::getenv("PATH");
  std::string pathString(path);
  ActionLayer* actionLayer = buildActionLayer(pathString);

  InputHandler* inputHandler = InputHandler::getInstance(actionLayer);

  while (!inputHandler->isKilled()) {
    std::cout << newLineCharacter;
    std::string input;
    std::getline(std::cin, input);
    inputHandler->executeCommand(input);
  }

  destroy(actionLayer, inputHandler);

}
