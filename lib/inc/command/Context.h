//
// Created by Jason Fedorowich on 2026-02-08.
//

#ifndef SHELL_STARTER_CPP_CONTEXT_H
#define SHELL_STARTER_CPP_CONTEXT_H
#include <string>
#include <vector>


struct InputHandler;
struct ActionLayer;


struct Context {
    std::vector<std::string> tokens;
    InputHandler* inputHandler;
    ActionLayer* actionLayer;
    explicit Context(const std::vector<std::string>& tokens) : tokens(tokens) {}

    std::string getAction(){
        if (tokens.empty()) return "";
        return tokens[0];
    }

    std::vector<std::string> getTrail() {
        if (tokens.size() <= 1) return {};
        return {tokens.begin() + 1, tokens.end()};
    }

    InputHandler * getInputHandler() {
        return inputHandler;
    }

    ActionLayer * getActionLayer() {
        return actionLayer;
    }

    void attach(InputHandler* inputHandler) { this->inputHandler = inputHandler; }
    void attach(ActionLayer* actionLayer) { this->actionLayer = actionLayer; }
};


#endif //SHELL_STARTER_CPP_CONTEXT_H