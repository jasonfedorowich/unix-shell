//
// Created by Jason Fedorowich on 2026-02-09.
//

#ifndef SHELL_STARTER_CPP_TOKENIZER_H
#define SHELL_STARTER_CPP_TOKENIZER_H

#include <vector>
#include <string>

#include "Token.h"

struct Tokenizer {
private:
    void parse();
    void push();
    void parseBackSlash();
    void parseSingleQuote();
    void parseDoubleQuote();
    void flush();
    int index;
    std::string input;
    std::vector<std::string> tokens;
    std::string buffer;
public:


    Tokenizer(const std::string& input) {
        this->input = input;
        this->index = 0;
    }
    char peek();
    char next();
    bool match(char expected);
    bool isOutOfBounds();
    void advance();

    std::vector<std::string> tokenize();
};




//todo might be easier to handle tokens rather than strings down the road
std::vector<std::string> tokenize(const std::string& text, char delim);
std::vector<std::string> tokenize(const std::string& text);

#endif //SHELL_STARTER_CPP_TOKENIZER_H
