//
// Created by Jason Fedorowich on 2026-02-09.
//

#ifndef SHELL_STARTER_CPP_TOKENIZER_H
#define SHELL_STARTER_CPP_TOKENIZER_H

#include <vector>
#include <string>

#include "Token.h"

//todo might be easier to handle tokens rather than strings down the road
std::vector<std::string> tokenize(const std::string& text);

#endif //SHELL_STARTER_CPP_TOKENIZER_H
