//
// Created by Jason Fedorowich on 2026-02-08.
//

#ifndef SHELL_STARTER_CPP_BUILTINS_H
#define SHELL_STARTER_CPP_BUILTINS_H

#include <unordered_map>
#include <string>

#include "Action.h"
#include "ExitAction.h"

static std::unordered_map<std::string, Action*> builtInActions = {{"exit", new ExitAction()}};


#endif //SHELL_STARTER_CPP_BUILTINS_H
