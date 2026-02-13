//
// Created by Jason Fedorowich on 2026-02-08.
//

#ifndef SHELL_STARTER_CPP_ACTION_H
#define SHELL_STARTER_CPP_ACTION_H

#include <unordered_map>

#include "inc/command/Context.h"


class Action {
protected:
    std::string where;
    std::string actionName;
public:
    virtual ~Action() = default;

    virtual void execute(Context& context) = 0;

    virtual std::string getDescription() = 0;
};


struct Context;
struct ActionLayer;

struct ActionLayer {

    std::unordered_map<std::string, Action*> actions;
    ActionLayer* next = nullptr;

    ActionLayer(const std::unordered_map<std::string, Action*>& actions) {
        this->actions = actions;
    }

    ~ActionLayer() {
        for (auto it = actions.begin(); it != actions.end(); ++it) {
            delete it->second;
        }
    }


    Action* find(std::string& name);
    void execute(Context& context);
};


ActionLayer* buildActionLayer(std::string& path);



#endif //SHELL_STARTER_CPP_ACTION_H