//
// Created by Jason Fedorowich on 2026-02-08.
//

#include "../../inc/action/Action.h"
#include "../../inc/action/BuiltIns.h"
#include "inc/action/DefaultAction.h"

void execute(Context& context) {
    DefaultAction action;
    if (builtInActions.find(context.getAction()) != builtInActions.end()) {
        builtInActions[context.getAction()]->execute(context);
    }else
        action.execute(context);
}

