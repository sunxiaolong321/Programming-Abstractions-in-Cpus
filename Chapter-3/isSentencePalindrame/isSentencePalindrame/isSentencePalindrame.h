#pragma once
#ifndef _isSentencePalindrame_h
#define _isSentencePalindrame_h
#include <string>

//返回无标点符号的新str
std::string newSentencePalindrame(std::string str);

//编写一个回文函数，忽略标点符号和大小写，如果如果正反一样，则正确。
bool isSentencePalindrame(std::string str);

/*编写一个函数creatRegularPlural（word)，请遵循一下几项原则，函数返回word的复数形式
*如果单词以s, x, z, ch或sh结尾，再单词末尾添加es。
*如果单词以y结尾，y前有一个辅音，修改y为ies。
*其他情况，在单词后加s即可。
*/
std::string creatRegularPlural(std::string word);

std::string createOrdinalForm(int n);

std::string erase(std::string digits, char c, int b);

std::string addCommas(std::string digits);

std::string erase(string digits, char c, int b);

std::string contast(string digits);

std::string addCommas(std::string digits);

#endif
