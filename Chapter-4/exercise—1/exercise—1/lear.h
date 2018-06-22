#pragma once
#ifndef _lear_h
#define _lear_h
#include <string>
#include <fstream>

std::string  filename(std::ifstream&infile, std::string input = "");

//输出多少字符
int chars(std::string line);

//输出多少单词
int words(std::string line);

//输入文件内容
void content();

#endif // !_lear_h

