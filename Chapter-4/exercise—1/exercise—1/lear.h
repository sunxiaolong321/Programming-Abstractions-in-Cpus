#pragma once
#ifndef _lear_h
#define _lear_h
#include <string>
#include <fstream>

std::string  filename(std::ifstream&infile, std::string input = "");

//��������ַ�
int chars(std::string line);

//������ٵ���
int words(std::string line);

//�����ļ�����
void content();

#endif // !_lear_h

