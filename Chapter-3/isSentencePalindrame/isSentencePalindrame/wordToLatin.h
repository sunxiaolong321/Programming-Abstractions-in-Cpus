#pragma once
#ifndef _wordToLatin_h
#define _wordToLatin_h
#include <string>

//���ز������㷢�Ƿ���Ԫ����ĸ
bool isDavel(char ch);

//���ҵ�һ��Ԫ����ĸλ��
int findFirstVowel(std::string word);

//����һ�����ʳɶ�ͯ�ڻ�
std::string wordTobigLatin(std::string word);

//�������и�ɵ�������
std::string linetobiglatin(std::string line);

#endif
