//
// Created by Jason Fedorowich on 2026-02-08.
//

#include "../../inc/action/ExitAction.h"

#include "../../inc/input/InputHandler.h"


ExitAction::ExitAction() = default;

void ExitAction::execute(Context& context) {
    InputHandler::getInstance()->kill();
}
