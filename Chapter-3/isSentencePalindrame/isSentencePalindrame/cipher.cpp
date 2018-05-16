#include <string>
#include <cctype>
using namespace std;

/*
*����ĸ�滻������������滻
*/

char rematching(char ch, string reletter);
string rereletter(string retter);

//�����Ӳ�ֳɵ�������
string letter_substitution(string word, string reletter)
{
	string newword;
	for (int i = 0; i < word.length(); i++)
	{
		if (isalpha(word[i]))
			newword += rematching(word[i], reletter);
		else
			newword += word[i];
	}
	return newword;
}

char rematching(char ch,string reletter)
{
	reletter = rereletter(reletter);
	ch -= 65;
	char newch = reletter[ch];
	return newch;
}

//��reletterȫ��ת��Ϊ��д��ĸ
string rereletter(string retter)
{
	string reletter;
	int n = 0;
	for (int i = 0; i < retter.length(); i++)
	{
		if(isalpha(retter[i]))
		reletter += toupper(retter[i]);
		n++;
		if (n > 25)
			break;
	}
	return reletter;
}