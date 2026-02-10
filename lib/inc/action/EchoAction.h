//
// Created by Jason Fedorowich on 2026-02-08.
//

#ifndef SHELL_STARTER_CPP_ECHOACTION_H
#define SHELL_STARTER_CPP_ECHOACTION_H
#include "Action.h"


class EchoAction : public Action{
    public:
    void execute(Context& context) override;
};


#endif //SHELL_STARTER_CPP_ECHOACTION_H