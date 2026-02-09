//
// Created by Jason Fedorowich on 2026-02-08.
//

#include "../inc/Action.h"
#include "../inc/BuiltIns.h"

bool execute(const std::string& action) {
    if (!builtInActions.contains(action)) {
        return false;
    }
    builtInActions[action]->execute();
    return true;
}

