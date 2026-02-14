//
// Created by Jason Fedorowich on 2026-02-14.
//

#ifndef SHELL_STARTER_CPP_PWDACTION_H
#define SHELL_STARTER_CPP_PWDACTION_H
#include "Action.h"


class PwdAction : public Action{
    public:
    PwdAction() : Action() {
        this->where = "shell builtin";
        this->actionName = "pwd";
    }

    void execute(Context &context) override;

    std::string getDescription() override;
};


#endif //SHELL_STARTER_CPP_PWDACTION_H