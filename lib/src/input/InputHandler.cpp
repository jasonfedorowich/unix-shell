//
// Created by Jason Fedorowich on 2026-02-07.
//

#include "../../inc/input/InputHandler.h"
#include "inc/command/Context.h"
#include "inc/token/Tokenizer.h"
#include "inc/action/Action.h"

InputHandler* InputHandler::instance = nullptr;

InputHandler *InputHandler::getInstance(ActionLayer* actionLayer) {
    if (instance == nullptr) {
        instance = new InputHandler(actionLayer);
    }
    return instance;
}

void InputHandler::executeCommand(const std::string &input) {
    Context context(tokenize(input));
    context.attach(this);
    context.attach(this->actionLayer);
    this->actionLayer->execute(context);
}
