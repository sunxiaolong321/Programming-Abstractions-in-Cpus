/*
*ʵ�ֶ�ͯ�ڻ�
*����
*������ʲ���Ԫ���������κη��롣
*���������Ԫ����ĸ��ͷ���������ͯ�ڻ������ԭ���ʼ��Ϻ�׺way
*��������Ը�����ĸ��ͷ������ȡ������ĸ�ַ���ֱ��������һ��Ԫ����ĸ���ƶ��ռ��ĸ�����ĸ������ĩβ��Ȼ��Ӻ�׺ay��
*������ĸ��д��
*/

#include <string>
#include <cctype>
using namespace std;

//���ز������㷢�Ƿ���Ԫ����ĸ
bool isDavel(char ch)
{
	switch (ch)
	{
	case 'a':case 'e':case 'i':case 'o':case 'u':case 'A':case 'E':case 'I':case 'O':case 'U':return true;
	defalut:
		return false;
	}
	return false;
}

//���ҵ�һ��Ԫ����ĸλ��
int findFirstVowel(string word)
{
	for (int i = 0; i < word.length(); i++)
	{
		if (isDavel(word[i]))
			return i;
	}
	return -1;
	}

//����һ�����ʳɶ�ͯ�ڻ�
string wordTobigLatin(string word)
{
	int vp = findFirstVowel(word);
	if (vp == -1)
	{
		return word;
	}
	else if (vp == 0)
	{
		return word + "way";
	}
	else {
		string head = word.substr(0, vp);
		string tail = word.substr(vp);
		return tail + head + "ay";
	}
}

//�������и�ɵ�������
string linetobiglatin(string line)
{
	string result;
	int start = -1;
	for (int i = 0; i < line.length(); i++)
	{
		char ch = line[i];
		if (isalpha(ch))
		{
			if (start == -1)
				start = i;
		}
		else {
			if (start >= 0)
			{
				result += wordTobigLatin(line.substr(start, i - start));
				start = -1;
			}
			result += ch;
		}
	}
	if (start >= 0)
		result += wordTobigLatin(line.substr(start));
	return result;
}