/*
*����һ�����ӣ�������ӵ�������ĸ��*
*/
#include <string>
using namespace std;

string acronym(string words)
{
	int i;
	string newwords = "";
	if (words[0] != ' ')
		newwords += words[0];
	for (i = 0; i < words.length(); i++)
	{
		while (words[i] == ' ')
		{
			i++;
			if(words[i] != ' ')
			newwords += words[i];
		}
	}
	return newwords;
}