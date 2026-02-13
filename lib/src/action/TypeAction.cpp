//
// Created by Jason Fedorowich on 2026-02-09.
//

#include "../../inc/action/TypeAction.h"

#include <iostream>
#include <ostream>

#include "inc/action/BuiltIns.h"

static void printMessage(std::string& token, Context& context) {
    ActionLayer* actionLayer = context.getActionLayer();
    Action* action = actionLayer->find(token);
    std::cout << action->getDescription() << std::endl;

}

void TypeAction::execute(Context &context) {
    //todo this can be an iteration
    std::string next = context.tokens[1];
    printMessage(next, context);
}

std::string TypeAction::getDescription() {
    return actionName + " is a " + where;
}


