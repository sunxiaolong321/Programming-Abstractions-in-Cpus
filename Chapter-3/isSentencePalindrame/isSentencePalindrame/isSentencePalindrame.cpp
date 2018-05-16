#include <string>
#include <cctype>
#include <sstream>
using namespace std;

//返回无标点符号的新str
string newSentencePalindrame(string str)
{
	string str1;
	unsigned int i;
	for (i = 0; i < str.length(); i++)
	{
		if (isalpha(str[i]))
			str1 += str[i];
	}
	return str1;
}

//编写一个回文函数，忽略标点符号和大小写，如果如果正反一样，则正确。
bool isSentencePalindrame(string str)
{
	string str1;
	str1 = newSentencePalindrame(str);
	int i, n = str1.length();
	for (i = 0; i < n / 2; i++)
	{
		if (toupper(str1[i]) != toupper(str1[n - i - 1]))
			return false;
	}
	return true;
}

/*编写一个函数creatRegularPlural（word)，请遵循一下几项原则，函数返回word的复数形式
*如果单词以s, x, z, ch或sh结尾，再单词末尾添加es。
*如果单词以y结尾，y前有一个辅音，修改y为ies。
*其他情况，在单词后加s即可。
*/
string creatRegularPlural(string word)
{
	int i = word.length() - 1;
	if (word[i] == 's' || word[i] == 'x' || word[i] == 'z' || (word[i - 1] == 'c'&&word[i] == 'h') || (word[i - 1] == 's'&&word[i] == 'h'))
	{
		word += "es";
		return word;
	}
	if ((word[i - 1] != 'a' || word[i - 1] != 'e' || word[i - 1] != 'i' || word[i - 1] != 'o' || word[i - 1] != 'u') && word[i] == 'y')
	{
		word[i] = 'i';
		word += "es";
		return word;
	}
	return word += "s";		
}

//编写一个函数，返回数字n的序数形式。
string createOrdinalForm(int n)
{
	int i = n % 10;
	string ordinal_number, cardinal_number;
	if (i == 1 && n != 11)
	{
		return ordinal_number = "st";
	}
	if (i == 2 && n != 12)
	{
		return ordinal_number = "nd";
	}
	if (i == 3 && n != 13)
	{
		return ordinal_number = "rd";
	}
	return ordinal_number = "th";
}

//插入函数
string erase(string digits, char c, int b )
{
	int i, j;
	string new_digits;
	for (i = 0, j = 0; i < digits.length(); i++,j++)
	{
		if (i = b)
		{
			new_digits[j] = c;
			j++;
		}
		new_digits[j] = digits[i];	
	}
	return new_digits;
}

//将字符串反过来输出
string contast(string digits)
{
	int i = digits.length() - 1;
	string new_digits;
	for (i; i >= 0; i--)
		new_digits += digits[i];
	return new_digits;
}

/*
*实现函数，读取一个数字的十进制数字字符串，然后返回从右开始，每三位数字添加一个“，”。
*/
string addCommas(string digits)
{
	int i, j;
	string new_digits, con_digits = contast(digits);
	for (i = 0; i < digits.length(); i++)
	{
		if (i > 2 && i % 3 == 0)
			new_digits += ',';
		new_digits += con_digits[i];
	}
	return contast(new_digits);
}