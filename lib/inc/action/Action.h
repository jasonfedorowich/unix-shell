//
// Created by Jason Fedorowich on 2026-02-08.
//

#ifndef SHELL_STARTER_CPP_ACTION_H
#define SHELL_STARTER_CPP_ACTION_H
#include <string>
#include <unordered_map>

#include "inc/command/Context.h"


class Action {
public:
    virtual ~Action() = default;

    virtual void execute(Context& context) = 0;
};


void execute(Context& context);


#endif //SHELL_STARTER_CPP_ACTION_H