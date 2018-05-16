#include <string>
using namespace std;

/*
*编写函数removecharacters(string std,str,remove)
*删除std中含有remove的字符
*/

string removecharacters(string std, string remove)
{
	int i, j;
	string std1 = "";
	for (i = 0; i < std.length(); i++)
	{
		for (j = 0; j < remove.length(); j++)
		{
			if (std[i] == remove[j])
			{
				i++;
				break;
			}
		}
		std1 += std[i];
	}
	return std1;
}

/*
*如果有双字符则删除其中一个字符，如rra则返回ra。
*/

string removeDoubleLetters(string str)
{
	int i = 0;
	string str1;
	while(i<str.length())
	{
		str1 += str[i];
		if (str[i] == str[i+1])
			i += 2;
		else i++;
	}
	return str1;
}

/*
*编写一个函数，返回从str的复制字符，其中每个str中的c1都用c2代替。
*/
string replace(string str, char c1, char c2)
{
	int i;
	string str1;
	for (i = 0; i < str.length(); i++)
		if (str[i] == c1)
		{
			str[i] = c2;
			str1 += str[i];
		}
		else str1 += str[i];
		return str1;
}

//判断str中是否有s1字符串, 并返回其位置
int choose(string str, string s1)
{
	int i, j = 0, n = 0;
	for (i = 0; i < str.length(); i++)
	{
		while (str[i] == s1[j])
		{
			if (j == s1.length()-1)
			{
				n = i - s1.length()+1;
				break;
			}
			j++;
			i++;
		}
	}
	return n;
}

/*
*编写一个函数，返回从str的复制字符串，其中每个str中的s1都用s2代替。
*/
string replaceALL(string str, string s1, string s2)
{
	int i, j = 0, n;
	string str1, str2;
	n = choose(str, s1);
	for (i = 0; i < str.length(); i++)
	{
		if (i == n)
		{
			for (j = 0; j < s2.length(); j++, i++)
				str1 += s2[j];
		}
		str1 += str[i];
	}
	return str1;
}
