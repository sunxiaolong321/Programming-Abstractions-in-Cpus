#pragma once
#ifndef _isSentencePalindrame_h
#define _isSentencePalindrame_h
#include <string>

//�����ޱ����ŵ���str
std::string newSentencePalindrame(std::string str);

//��дһ�����ĺ��������Ա����źʹ�Сд������������һ��������ȷ��
bool isSentencePalindrame(std::string str);

/*��дһ������creatRegularPlural��word)������ѭһ�¼���ԭ�򣬺�������word�ĸ�����ʽ
*���������s, x, z, ch��sh��β���ٵ���ĩβ���es��
*���������y��β��yǰ��һ���������޸�yΪies��
*����������ڵ��ʺ��s���ɡ�
*/
std::string creatRegularPlural(std::string word);

std::string createOrdinalForm(int n);

std::string erase(std::string digits, char c, int b);

std::string addCommas(std::string digits);

std::string erase(string digits, char c, int b);

std::string contast(string digits);

std::string addCommas(std::string digits);

#endif
