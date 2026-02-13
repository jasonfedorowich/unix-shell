//
// Created by Jason Fedorowich on 2026-02-08.
//

#include "../../inc/action/ExitAction.h"

#include "../../inc/input/InputHandler.h"



void ExitAction::execute(Context& context) {
    context.getInputHandler()->kill();
}

std::string ExitAction::getDescription() {
    return actionName + " is a " + where;
}
