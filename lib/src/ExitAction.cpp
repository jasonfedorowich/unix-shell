//
// Created by Jason Fedorowich on 2026-02-08.
//

#include "../inc/ExitAction.h"

#include "inc/InputHandler.h"


ExitAction::ExitAction() {
}

void ExitAction::execute() {
    InputHandler::getInstance()->kill();
}
