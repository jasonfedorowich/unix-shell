//
// Created by Jason Fedorowich on 2026-02-07.
//

#include "../../inc/input/InputHandler.h"
#include <iostream>
#include "../../inc/action/Action.h"
#include "inc/command/Context.h"
#include "inc/token/Tokenizer.h"

InputHandler* InputHandler::instance = nullptr;

InputHandler *InputHandler::getInstance() {
    if (instance == nullptr) {
        instance = new InputHandler();
    }
    return instance;
}

void InputHandler::readCommand(const std::string &input) {
    Context context(tokenize(input));
    execute(context);
}
