//
// Created by Jason Fedorowich on 2026-02-08.
//

#include "../../inc/action/DefaultAction.h"
#include <iostream>

void DefaultAction::execute(Context &context) {
    std::cout << context.getAction() << ": command not found" << std::endl;
}
