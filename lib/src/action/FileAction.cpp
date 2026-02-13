//
// Created by Jason Fedorowich on 2026-02-12.
//

#include "../../inc/action/FileAction.h"

void FileAction::execute(Context &context) {
    file.execute(context);
}

std::string FileAction::getDescription() {
    return this->actionName + " is " + this->where + "/" + this->actionName;
}
