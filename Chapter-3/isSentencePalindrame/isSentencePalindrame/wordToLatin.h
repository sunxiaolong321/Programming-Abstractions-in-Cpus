#pragma once
#ifndef _wordToLatin_h
#define _wordToLatin_h
#include <string>

//返回布尔运算发是否是元音字母
bool isDavel(char ch);

//查找第一个元音字母位置
int findFirstVowel(std::string word);

//翻译一个单词成儿童黑话
std::string wordTobigLatin(std::string word);

//将句子切割成单个单词
std::string linetobiglatin(std::string line);

#endif
