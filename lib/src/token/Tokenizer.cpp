//
// Created by Jason Fedorowich on 2026-02-09.
//

#include "../../inc/token/Tokenizer.h"

#include <ostream>

void Tokenizer::parse() {
   while (!isOutOfBounds()) {
       switch (peek()) {
           case '\'':
               parseSingleQuote();
               break;
           case '\"':
               parseDoubleQuote();
               break;
           case '\\':
               parseBackSlash();
               break;
           case ' ':
               flush();
               break;
           default:
               push();
               break;
       }
   }
    flush();
}

void Tokenizer::push() {
    buffer.push_back(next());
}

void Tokenizer::parseBackSlash() {
    next();
    if (!isOutOfBounds()) push();
}

void Tokenizer::parseSingleQuote() {
    advance();
    std::string current;
    while (peek() != '\'') {
        current.push_back(next());
    }
    advance();
    buffer += current;
}

void Tokenizer::parseDoubleQuote() {
    advance();
    std::string current;
    while (peek() != '"') {
        current.push_back(next());
    }
    advance();
    buffer += current;
}

void Tokenizer::flush() {
    if (buffer.empty()) {
        advance();
        return;
    }
    tokens.push_back(buffer);
    buffer.clear();
    advance();
}

char Tokenizer::peek() {
    if (!isOutOfBounds()) return input[index];
    return '\0';
}

char Tokenizer::next() {
    if (!isOutOfBounds()) return input[index++];
    return '\0';
}

bool Tokenizer::match(char expected) {
    if (!isOutOfBounds()) return input[index] == expected;
    return false;
}

bool Tokenizer::isOutOfBounds() {
    return this->index >= this->input.size();
}

void Tokenizer::advance() {
    index++;
}

std::vector<std::string> Tokenizer::tokenize() {
    parse();
    return tokens;
}

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
    Tokenizer tokenizer(text);
    std::vector<std::string> tokens = tokenizer.tokenize();
    return tokens;
}

