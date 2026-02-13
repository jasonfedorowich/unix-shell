//
// Created by Jason Fedorowich on 2026-02-12.
//

#include "../../inc/file/File.h"
#include <filesystem>
#include <unistd.h>
#include <sys/wait.h>
#include <iostream>

void File::execute(Context &context) {
     pid_t pid = fork();

     if (pid == 0) {
         std::vector<char*> argv;

         for (const auto& token : context.tokens) {
             argv.push_back(const_cast<char*>(token.c_str()));
         }

         argv.push_back(nullptr);

         execvp(argv[0], argv.data());

         perror("execv failed");
         exit(1);
     }
     else if (pid > 0) {
         // Parent process
         int status;
         waitpid(pid, &status, 0);
     }
     else {
         perror("fork failed");
     }
}

static bool isExecutable(std::filesystem::perms p) {
    namespace fs = std::filesystem;
    return ((p & fs::perms::owner_exec) != fs::perms::none) ||
                                 ((p & fs::perms::group_exec) != fs::perms::none) ||
                                 ((p & fs::perms::others_exec) != fs::perms::none);
}



std::vector<File> getExecutableFiles(std::string &path) {
    std::vector<File> files;
    if (!std::filesystem::is_directory(path)) return {};
    for (auto& entry: std::filesystem::directory_iterator(path)) {
        std::error_code ec;
        if (std::filesystem::is_directory(entry.path(), ec)) {
            continue;
        }
        if (ec) continue;

        const std::filesystem::path file_path = entry.path();
        std::filesystem::file_status s = std::filesystem::status(file_path, ec);
        if (ec) continue;

        if (!std::filesystem::is_regular_file(entry, ec)) {
            continue;
        }
        if (ec) continue;
        std::filesystem::perms p = s.permissions();
        if (isExecutable(p)) {
            files.emplace_back(file_path.filename(), path);
        }
    }

    return files;
}
