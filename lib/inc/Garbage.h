//
// Created by Jason Fedorowich on 2026-02-08.
//

#ifndef SHELL_STARTER_CPP_GARBAGE_H
#define SHELL_STARTER_CPP_GARBAGE_H

#include "inc/BuiltIns.h"
#include "inc/InputHandler.h"

inline void destroy() {
    InputHandler* handler = InputHandler::getInstance();
    delete handler;
    for (auto it: builtInActions) {
        delete it.second;
    }
}

#endif //SHELL_STARTER_CPP_GARBAGE_H
