#pragma once
#ifndef _removecharacter_h
#define _removecharacter_h
#include <string>

/*
*编写函数removecharacters(string std,str,remove)
*删除std中含有remove的字符
*/
std::string removecharacters(std::string std, std::string remove);

/*
*如果有双字符则删除其中一个字符，如rra则返回ra。
*/
std::string removeDoubleLetters(std::string str);

/*
*编写一个函数，返回从str的复制字符，其中每个str中的c1都用c2代替。
*/
std::string replace(std::string str, char c1, char c2);

#endif