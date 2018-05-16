#pragma once
#ifndef _findDNAMatch_h
#define _findDNAMatch_h
#include <string>

int findDNAMatch(std::string s1, std::string s2, int start = 0);
int error(std::string s1, std::string s2);
int find(char ch, std::string s2);
bool match(char ch, char sh);
bool alpha(char ch);

#endif
