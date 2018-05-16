#include <string>
#include <cctype>
using namespace std;

char alpha(char ch, int shift);

/*
*你可以将原始消息中的每一个字母用字母表出现在它以前一个固定距离的字母来代替
*翻译只适用字母，原始消息其他字符不变，大小写不变
*/

string encodeCaesarCipher(string str, int shift)
{
	string newstr;
	for (int i = 0; i < str.length(); i++)
	{
		if (isalpha(str[i]))
		{
			newstr += alpha(str[i], shift);
		}
		else
			newstr += str[i];
	}
	return newstr;
}

//编写输入一个字符，输出字符表的循环结构
char alpha(char ch,int shift)
{
	if (isupper(ch))
	{
		int x = ch + shift;
		if (x > 90)
			x -= 26;
		else if (x < 65)
			x += 26;
		return (char)x;
	}
	else
	{
		int x = ch + shift;
		if (x > 122)
			x -= 26;
		else if (x < 65)
			x += 26;
		return (char)x;
	}
}