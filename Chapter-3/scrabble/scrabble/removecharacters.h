#pragma once
#ifndef _removecharacter_h
#define _removecharacter_h
#include <string>

/*
*��д����removecharacters(string std,str,remove)
*ɾ��std�к���remove���ַ�
*/
std::string removecharacters(std::string std, std::string remove);

/*
*�����˫�ַ���ɾ������һ���ַ�����rra�򷵻�ra��
*/
std::string removeDoubleLetters(std::string str);

/*
*��дһ�����������ش�str�ĸ����ַ�������ÿ��str�е�c1����c2���档
*/
std::string replace(std::string str, char c1, char c2);

int choose(std::string str, std::string s1);

/*
*��дһ�����������ش�str�ĸ����ַ���������ÿ��str�е�s1����s2���档
*/
std::string replaceALL(std::string str, std::string s1, std::string s2);

#endif