//
// Created by Jason Fedorowich on 2026-02-14.
//

#include "../../inc/action/PwdAction.h"

#include <iostream>

#include "inc/file/File.h"


void PwdAction::execute(Context &context) {
    std::cout << getWorkingDirectory() << std::endl;
}

std::string PwdAction::getDescription() {
    //todo make another type BuiltInAction where this is already defined
    return actionName + " is a " + where;
}
