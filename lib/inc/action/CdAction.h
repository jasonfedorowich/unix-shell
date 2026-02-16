//
// Created by Jason Fedorowich on 2026-02-14.
//

#ifndef SHELL_STARTER_CPP_CDACTION_H
#define SHELL_STARTER_CPP_CDACTION_H
#include "Action.h"


class CdAction : public Action{

public:
    CdAction() : Action() {
        this->where = "shell builtin";
        this->actionName = "cd";
    }

    void execute(Context &context) override;

    std::string getDescription() override;
};


#endif //SHELL_STARTER_CPP_CDACTION_H