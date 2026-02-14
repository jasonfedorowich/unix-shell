//
// Created by Jason Fedorowich on 2026-02-14.
//

#include "../../inc/process/Process.h"

#include <cstdio>
#include <cstdlib>
#include <unistd.h>
#include <sys/wait.h>

void execProcess(Context* context, void(*func)(Context*)) {
    pid_t pid = fork();

    if (pid == 0) {
        func(context);

        perror("failed to execute process");
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
