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

static std::string getSingleQuotedString(const std::string &text, int& i) {
    i++;
    std::string str;
    while (i < text.size() && text[i] != '\'') {
        str.push_back(text[i]);
        i++;
    }
    return str;
}

static std::string getDoubleQuotedString(const std::string &text, int& i) {
    i++;
    std::string str;
    while (i < text.size() && text[i] != '\"') {
        str.push_back(text[i]);
        i++;
    }
    return str;
}

std::vector<std::string> tokenize(const std::string &text) {
    int i = 0;
    std::vector<std::string> tokens;
    std::string token;
    while (i < text.size()) {
        if (text[i] == ' ') {
            if (!token.empty()) {
                tokens.push_back(token);
                token.clear();
            }
        }else if (text[i] == '\'') {
            token += getSingleQuotedString(text, i);
        }else if (text[i] == '\"') {
            token += getDoubleQuotedString(text, i);
        }
        else {
            token.push_back(text[i]);
        }
        i++;
    }
    tokens.push_back(token);
    return tokens;
}

