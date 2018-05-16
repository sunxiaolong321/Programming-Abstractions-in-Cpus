#include <string>
#include <cctype>
using namespace std;

bool vowel(char ch);
/*
*函数元音字母前加ob
*在元音后的元音不加ob
*出现在单词末尾的e不加ob
*/
string obenglobish(string word)
{
	string head, tail, newword;
	int j = 0, h = 0;
	for (int i = 0; i < word.length()-1; i++)
	{
		if (vowel(word[i]) && !vowel(word[i - 1]))
		{
			h = i - j;
			head = word.substr(j, h);
			newword += head + "ob";
			j = i;
		}
	}
	tail = word.substr(j);
	return newword + tail;
}

bool vowel(char ch)
{
	switch (ch)
	{
	case 'a':case 'e':case 'i':case 'o':case 'u':
	case 'A':case 'E':case 'I':case 'O':case 'U':
		return true;
	default:
		return false;
	}
}