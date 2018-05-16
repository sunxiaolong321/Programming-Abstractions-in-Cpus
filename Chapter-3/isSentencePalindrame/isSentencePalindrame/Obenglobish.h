#pragma once
#ifndef _Obinglobish_h
#define _Obinglobish_h
#include <string>
#include <cctype>

/*
*函数元音字母前加ob
*在元音后的元音不加ob
*出现在单词末尾的e不加ob
*/
std::string obenglobish(std::string word);

bool vowel(char ch);

#endif

