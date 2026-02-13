//
// Created by Jason Fedorowich on 2026-02-08.
//

#ifndef SHELL_STARTER_CPP_ECHOACTION_H
#define SHELL_STARTER_CPP_ECHOACTION_H
#include "Action.h"


class EchoAction : public Action{
public:
    EchoAction() : Action() {
        this->where = "shell builtin";
        this->actionName = "echo";
    }
    void execute(Context& context) override;

    std::string getDescription() override;
};


#endif //SHELL_STARTER_CPP_ECHOACTION_H