//
// Created by Jason Fedorowich on 2026-02-07.
//

#ifndef SHELL_STARTER_CPP_INPUTHANDLER_H
#define SHELL_STARTER_CPP_INPUTHANDLER_H
#include <string>


class InputHandler {
private:
    bool killed;
public:
    InputHandler() : killed(false) {}

    void readCommand(const std::string & input);

    bool isKilled() const{ return this->killed; }
};


#endif //SHELL_STARTER_CPP_INPUTHANDLER_H