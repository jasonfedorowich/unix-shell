//
// Created by Jason Fedorowich on 2026-02-08.
//

#ifndef SHELL_STARTER_CPP_DEFAULTACTION_H
#define SHELL_STARTER_CPP_DEFAULTACTION_H
#include "Action.h"


class DefaultAction : public Action {

public:
    DefaultAction() = default;

    void execute(Context &context) override;

    std::string getDescription() override;
};


#endif //SHELL_STARTER_CPP_DEFAULTACTION_H