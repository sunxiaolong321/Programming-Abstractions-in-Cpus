/*
*实现儿童黑话
*规则：
*如果单词不带元音，不做任何翻译。
*如果单词以元音字母开头，则翻译出儿童黑话后包括原单词加上后缀way
*如果单词以辅音字母开头，则提取辅音字母字符串直到遇到第一个元音字母，移动收集的辅音字母到单词末尾，然后加后缀ay。
*句首字母大写。
*/

#include <string>
#include <cctype>
using namespace std;

//返回布尔运算发是否是元音字母
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

//查找第一个元音字母位置
int findFirstVowel(string word)
{
	for (int i = 0; i < word.length(); i++)
	{
		if (isDavel(word[i]))
			return i;
	}
	return -1;
	}

//翻译一个单词成儿童黑话
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

//将句子切割成单个单词
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