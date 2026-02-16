//
// Created by Jason Fedorowich on 2026-02-12.
//

#ifndef SHELL_STARTER_CPP_FILE_H
#define SHELL_STARTER_CPP_FILE_H
#include <string>
#include <utility>
#include <vector>

#include "inc/command/Context.h"

struct File {
    std::string fileName;
    std::string path;
    File(std::string fileName, std::string path) : fileName(std::move(fileName)), path(std::move(path)) {
    }

    void execute(Context &context);

};

std::vector<File> getExecutableFiles(std::string& path);

std::string getWorkingDirectory();

bool directoryExists(std::string& path);

void changeWorkingDirectory(std::string& path);


#endif //SHELL_STARTER_CPP_FILE_H