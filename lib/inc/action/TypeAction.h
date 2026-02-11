//
// Created by Jason Fedorowich on 2026-02-09.
//

#ifndef SHELL_STARTER_CPP_TYPEACTION_H
#define SHELL_STARTER_CPP_TYPEACTION_H
#include "Action.h"


class TypeAction : public Action{
public:
    void execute(Context &context) override;
};


#endif //SHELL_STARTER_CPP_TYPEACTION_H