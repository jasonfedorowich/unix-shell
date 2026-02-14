//
// Created by Jason Fedorowich on 2026-02-14.
//

#ifndef SHELL_STARTER_CPP_PROCESS_H
#define SHELL_STARTER_CPP_PROCESS_H
struct Context;
void execProcess(Context* context, void (*func)(Context* context));

#endif //SHELL_STARTER_CPP_PROCESS_H