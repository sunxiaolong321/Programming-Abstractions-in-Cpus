#pragma once
#ifndef _cipher_h
#define _cipher_h
#include <string>

std::string letter_substitution(std::string word, std::string reletter);

char rematching(char ch, std::string reletter);

#endif