//
// Created by Jason Fedorowich on 2026-02-08.
//

#ifndef SHELL_STARTER_CPP_ACTION_H
#define SHELL_STARTER_CPP_ACTION_H
#include <string>
#include <unordered_map>


class Action {
public:
    virtual ~Action() = default;

    virtual void execute() = 0;
};


bool execute(const std::string& action);


#endif //SHELL_STARTER_CPP_ACTION_H