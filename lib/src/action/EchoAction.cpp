//
// Created by Jason Fedorowich on 2026-02-08.
//

#include "../../inc/action/EchoAction.h"
#include <iostream>

void EchoAction::execute(Context &context) {
    if (context.tokens.size() <= 1) return;
    std::string echo = "";
    for (std::string s: context.getTrail()) {
        echo.append(s);
        echo.push_back(' ');
    }
    echo.pop_back();
    std::cout << echo << std::endl;
}
