//
// Created by Jason Fedorowich on 2026-02-09.
//

#include "../../inc/action/TypeAction.h"

#include <iostream>
#include <ostream>

#include "inc/action/BuiltIns.h"

static void printMessage(std::string& token) {
    auto it = builtInActions.find(token);
    if (it != builtInActions.end()) {
        std::cout << it->first << " is a shell builtin" << std::endl;
    }else {
        std::cout << token << ": not found" << std::endl;
    }
}

void TypeAction::execute(Context &context) {
    //todo this can be an iteration
    std::string next = context.tokens[1];
    printMessage(next);
}


