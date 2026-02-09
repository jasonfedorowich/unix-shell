//
// Created by Jason Fedorowich on 2026-02-08.
//

#ifndef SHELL_STARTER_CPP_EXITACTION_H
#define SHELL_STARTER_CPP_EXITACTION_H
#include "Action.h"


class ExitAction : public Action {

public:
    ExitAction();

    ~ExitAction() override = default;

    void execute() override;
};


#endif //SHELL_STARTER_CPP_EXITACTION_H