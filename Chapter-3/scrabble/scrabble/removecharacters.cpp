#include <string>
using namespace std;

/*
*��д����removecharacters(string std,str,remove)
*ɾ��std�к���remove���ַ�
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
*�����˫�ַ���ɾ������һ���ַ�����rra�򷵻�ra��
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
*��дһ�����������ش�str�ĸ����ַ�������ÿ��str�е�c1����c2���档
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

//�ж�str���Ƿ���s1�ַ���, ��������λ��
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
*��дһ�����������ش�str�ĸ����ַ���������ÿ��str�е�s1����s2���档
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
