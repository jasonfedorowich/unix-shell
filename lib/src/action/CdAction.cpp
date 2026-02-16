//
// Created by Jason Fedorowich on 2026-02-14.
//

#include "../../inc/action/CdAction.h"

#include <iostream>
#include <ostream>

#include "inc/file/File.h"

void CdAction::execute(Context &context) {
    if (directoryExists(context.getTrail()[0]))
        changeWorkingDirectory(context.getTrail()[0]);
    else
        std::cout << "cd: " <<context.getTrail()[0] << ": No such file or directory." << std::endl;
}

std::string CdAction::getDescription() {
    //todo make another type BuiltInAction where this is already defined
    return actionName + " is a " + where;
}
