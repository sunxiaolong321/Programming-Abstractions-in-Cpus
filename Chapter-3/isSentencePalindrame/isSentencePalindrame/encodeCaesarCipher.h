#pragma once
#ifndef _encodeCaesarCipher_h
#define _encodeCaesarCipher_h
#include <string>

std::string encodeCaesarCipher(std::string str, int shift);

char alpha(char ch, int shift);

#endif
