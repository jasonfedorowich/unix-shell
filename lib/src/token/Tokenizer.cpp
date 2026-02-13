//
// Created by Jason Fedorowich on 2026-02-09.
//

#include "../../inc/token/Tokenizer.h"

std::vector<std::string> tokenize(const std::string &text, char delim) {
    int i = 0;
    std::vector<std::string> tokens;
    std::string token;
    while (i < text.size()) {
        if (text[i] == delim) {
            tokens.push_back(token);
            token.clear();
        }else {
            token.push_back(text[i]);
        }
        i++;
    }
    tokens.push_back(token);
    return tokens;
}

std::vector<std::string> tokenize(const std::string &text) {
    int i = 0;
    std::vector<std::string> tokens;
    std::string token;
    while (i < text.size()) {
        if (text[i] == ' ') {
            tokens.push_back(token);
            token.clear();
        }else {
            token.push_back(text[i]);
        }
        i++;
    }
    tokens.push_back(token);
    return tokens;
}
