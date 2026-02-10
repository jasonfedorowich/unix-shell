//
// Created by Jason Fedorowich on 2026-02-07.
//

#ifndef SHELL_STARTER_CPP_INPUTHANDLER_H
#define SHELL_STARTER_CPP_INPUTHANDLER_H
#include <string>


class InputHandler {
    bool killed;
    static InputHandler* instance;
    InputHandler() : killed(false) {}
public:

    void readCommand(const std::string & input);

    bool isKilled() const{ return this->killed; }

    void kill() {
        this->killed = true;
    }

    static InputHandler* getInstance();
};


#endif //SHELL_STARTER_CPP_INPUTHANDLER_H