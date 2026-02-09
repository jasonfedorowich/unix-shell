//
// Created by Jason Fedorowich on 2026-02-07.
//

#include "../inc/InputHandler.h"
#include <iostream>
#include "inc/Action.h"

InputHandler* InputHandler::instance = nullptr;

InputHandler *InputHandler::getInstance() {
    if (instance == nullptr) {
        instance = new InputHandler();
    }
    return instance;
}

void InputHandler::readCommand(const std::string &input) {
    if (!execute(input))
        std::cout << input << ": command not found" << std::endl;
}
