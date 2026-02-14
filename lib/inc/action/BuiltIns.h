//
// Created by Jason Fedorowich on 2026-02-08.
//

#ifndef SHELL_STARTER_CPP_BUILTINS_H
#define SHELL_STARTER_CPP_BUILTINS_H

#include <unordered_map>
#include <string>

#include "Action.h"
#include "EchoAction.h"
#include "ExitAction.h"
#include "PwdAction.h"
#include "TypeAction.h"

static std::unordered_map<std::string, Action*> builtInActions = {
    {"exit", new ExitAction()},
    {"echo", new EchoAction()},
    {"type", new TypeAction()},
    {"pwd",  new PwdAction()}
};


#endif //SHELL_STARTER_CPP_BUILTINS_H
