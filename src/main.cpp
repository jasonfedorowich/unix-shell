#include <iostream>
#include <string>
#include "input/InputHandler.h"

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  InputHandler inputHandler;

  while (!inputHandler.isKilled()) {
    std::cout << "$ ";
    std::string input;
    std::getline(std::cin, input);
    inputHandler.readCommand(input);
  }


}
