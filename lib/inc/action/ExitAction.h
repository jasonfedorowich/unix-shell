//
// Created by Jason Fedorowich on 2026-02-08.
//

#ifndef SHELL_STARTER_CPP_EXITACTION_H
#define SHELL_STARTER_CPP_EXITACTION_H
#include "Action.h"


class ExitAction : public Action {

public:

    ExitAction() : Action() {
        this->where = "shell builtin";
        this->actionName = "exit";
    }

    ~ExitAction() override = default;

    void execute(Context& context) override;

    std::string getDescription() override;
};


#endif //SHELL_STARTER_CPP_EXITACTION_H