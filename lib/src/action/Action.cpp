//
// Created by Jason Fedorowich on 2026-02-08.
//

#include "../../inc/action/Action.h"

#include <algorithm>
#include <iostream>

#include "inc/action/BuiltIns.h"
#include "inc/action/FileAction.h"
#include "inc/file/File.h"
#include "inc/token/Tokenizer.h"

Action* ActionLayer::find(std::string& name) {
    if (this->actions.find(name) != this->actions.end()) {
        return this->actions[name];
    }
    if (next != nullptr) {
        return next->find(name);
    }
    return nullptr;
}

void ActionLayer::execute(Context &context) {
    if (this->actions.find(context.getAction()) != this->actions.end()) {
        this->actions[context.getAction()]->execute(context);
    }
    else if (next != nullptr) {
        next->execute(context);
    }
    else
        std::cout << context.getAction() << ": command not found" << std::endl;
}

static std::unordered_map<std::string, Action*> toActions(std::vector<File>& files) {
    std::unordered_map<std::string, Action*> actions;
    for (File& file : files) {
        actions[file.fileName] = new FileAction(file);
    }
    return actions;
}

ActionLayer * buildActionLayer(std::string &path) {
#ifdef _WIN32
    constexpr char PATH_LIST_SEPARATOR = ';';
#else
    constexpr char PATH_LIST_SEPARATOR = ':';
#endif
    std::vector<std::string> tokens = tokenize(path, PATH_LIST_SEPARATOR);
    ActionLayer* parent = new ActionLayer(builtInActions);
    ActionLayer* actionLayer = parent;
    reverse(tokens.begin(), tokens.end());
    while (!tokens.empty()) {
        std::string path = tokens.back();
        tokens.pop_back();
        std::vector<File> executableFiles = getExecutableFiles(path);
        if (executableFiles.empty()) continue;
        std::unordered_map<std::string, Action*> actions = toActions(executableFiles);
        actionLayer->next = new ActionLayer(actions);
        actionLayer = actionLayer->next;
    }
    return parent;
}

