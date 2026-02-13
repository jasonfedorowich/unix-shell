//
// Created by Jason Fedorowich on 2026-02-07.
//

#ifndef SHELL_STARTER_CPP_INPUTHANDLER_H
#define SHELL_STARTER_CPP_INPUTHANDLER_H
#include <string>

struct ActionLayer;

class InputHandler {
    bool killed;
    static InputHandler* instance;
    ActionLayer* actionLayer;
    InputHandler(ActionLayer* actionLayer) : killed(false), actionLayer(actionLayer) {}
public:

    void executeCommand(const std::string & input);

    bool isKilled() const{ return this->killed; }

    void kill() {
        this->killed = true;
    }

    static InputHandler* getInstance(ActionLayer* actionLayer);


};


#endif //SHELL_STARTER_CPP_INPUTHANDLER_H