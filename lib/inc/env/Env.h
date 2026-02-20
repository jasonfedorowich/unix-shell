//
// Created by Jason Fedorowich on 2026-02-19.
//

#ifndef SHELL_STARTER_CPP_ENV_H
#define SHELL_STARTER_CPP_ENV_H
#include <cstdlib>
#include <string>


class Env {
};

inline std::string getPath() {
    const char* path = std::getenv("PATH");
    return {path};
}

inline std::string getHome() {
    const char* home = std::getenv("HOME");
    return {home};
}



#endif //SHELL_STARTER_CPP_ENV_H