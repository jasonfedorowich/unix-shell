//
// Created by Jason Fedorowich on 2026-02-08.
//

#ifndef SHELL_STARTER_CPP_CONTEXT_H
#define SHELL_STARTER_CPP_CONTEXT_H
#include <string>
#include <vector>


struct Context {
    std::vector<std::string> tokens;

    explicit Context(const std::vector<std::string>& tokens) : tokens(tokens) {}

    std::string getAction(){
        if (tokens.empty()) return "";
        return tokens[0];
    }

    std::vector<std::string> getTrail() {
        if (tokens.size() <= 1) return {};
        return {tokens.begin() + 1, tokens.end()};
    }

};


#endif //SHELL_STARTER_CPP_CONTEXT_H