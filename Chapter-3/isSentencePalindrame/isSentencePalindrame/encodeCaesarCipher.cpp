#include <string>
#include <cctype>
using namespace std;

char alpha(char ch, int shift);

/*
*����Խ�ԭʼ��Ϣ�е�ÿһ����ĸ����ĸ�����������ǰһ���̶��������ĸ������
*����ֻ������ĸ��ԭʼ��Ϣ�����ַ����䣬��Сд����
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

//��д����һ���ַ�������ַ����ѭ���ṹ
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