#include <string>
#include <cctype>
using namespace std;

int error(string s1, string s2);
int find(char ch, string s2);
bool match(char ch, char sh);
bool alpha(char ch);
//���DNA����ATCG����������λ��
int findDNAMatch(string s1, string s2, int start = 0)
{
	int x = 0;
	start = error(s1, s2);
	return start;
}

int error(string s1, string s2)
{
	int x = 0, y = 0;
	for (int i = 0; i < s1.length(); i++)
	{
		if (find(s1[i], s2) != 0)
		{
			x++;
			y = find(s1[i], s2);
		}
		else x = 0;
	}
	if (x == s1.length())
		return y = y - s1.length()+1;
	else return -1;
}

//�ҵ�s2����,����s1��һ���ַ���s2����λ��
int find(char ch, string s2)
{
	for (int i = 0; i < s2.length(); i++)
	{
		if (match(ch, s2[i]))
		{
			return i;
			break;
		}
	}
	return 0;
}

//�ж��Ƿ����
bool match(char ch, char sh)
{
	if (alpha(ch) && (alpha(sh)))
	{
		if ((ch == sh + 19) || (sh == ch + 19)|| (ch == sh + 4) || (sh == ch + 4))
			return true;
		else return false;
	}
	else return false;
}

//�ж��Ƿ���ATCG�ĸ��ַ�
bool alpha(char ch)
{
	if(ch == 'A' || ch == 'T' || ch == 'C' || ch == 'G')
	return true;
	else return false;
}