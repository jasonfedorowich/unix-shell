//
// Created by Jason Fedorowich on 2026-02-07.
//

#ifndef SHELL_STARTER_CPP_INPUTHANDLER_H
#define SHELL_STARTER_CPP_INPUTHANDLER_H
#include <string>


class InputHandler {
    public:
    InputHandler() = default;

    void readCommand(const std::string & input);
};


#endif //SHELL_STARTER_CPP_INPUTHANDLER_H