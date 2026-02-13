//
// Created by Jason Fedorowich on 2026-02-12.
//

#ifndef SHELL_STARTER_CPP_FILEACTION_H
#define SHELL_STARTER_CPP_FILEACTION_H
#include "Action.h"
#include "inc/file/File.h"


class FileAction : public Action{
    File file;
public:
    FileAction(File& file) : file(file) {
        this->where = file.path;
        this->actionName = file.fileName;
    }

    void execute(Context &context) override;

    std::string getDescription() override;
};


#endif //SHELL_STARTER_CPP_FILEACTION_H