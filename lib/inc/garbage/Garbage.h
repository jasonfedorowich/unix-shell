//
// Created by Jason Fedorowich on 2026-02-08.
//

#ifndef SHELL_STARTER_CPP_GARBAGE_H
#define SHELL_STARTER_CPP_GARBAGE_H

#include "../action/BuiltIns.h"
#include "../input/InputHandler.h"
#include "../action/Action.h"



inline void destroy(ActionLayer* actionLayer, InputHandler* inputHandler) {
    delete inputHandler;
    while (actionLayer != nullptr) {
        ActionLayer* next = actionLayer->next;
        delete actionLayer;
        actionLayer = next;
    }
}

#endif //SHELL_STARTER_CPP_GARBAGE_H
