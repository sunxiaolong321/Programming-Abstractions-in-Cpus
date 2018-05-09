#include <string>
using namespace std;

/*
*实现函数，如果endsWith（str,suffix),函数的功能为如果str以suffix，结尾，则返回true。
*endsWith函数应该允许第二个参数是字符串或者一个字符
*/
bool endsWith(string str, string suffix)
{
	return str.substr(str.length() - suffix.length()) == suffix;
}


/*
*实现一个自由函数substr（str, pos, n), 该函数返回从str的pos的位置开始，最多包含n个字符的长度。
*确保你的函数正确的应用了以下规则
*如果n缺失或者大于字符串长度，字串应该延伸到原字符串的末尾
*如果pos大于字符串的长度，substr应该使用一个合适的消息去调用error。
*/

string substr(string str, string pos, int n)
{
	int i, j = 0, h = 0;
	string newstring = "";
	if (pos.length() > str.length())
	{
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < str.length(); i++)
	{
		if (str[i] == pos[j])
		{
			j++;
			if (j == pos.length())
				h = i;
				break;
		}
		else j = 0;

	}
	j = h - pos.length() + 1;
	if (n > str.length() || n == NULL) 
		for (i = j; i < str.length(); i++)
		{
			newstring += str[i];
		}
	i = 0;
	while (i < n)
	{	
		newstring += str[j];
		i++;
		j++;
}
	return newstring;

}