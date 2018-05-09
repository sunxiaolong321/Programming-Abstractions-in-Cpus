/*
*单词游戏，如果分数为A、 E、I、L、N、O、R、S、T、U分数为1
*如果为D、G分数为2
*B、C、M、P分数为3
*F/H/V/W/Y分数为4
*K/分数为5
*J/X分数为8
*Q/Z分数为10
*/
#include <string>
using namespace std;

int choose(string table)
{
	switch (table[0])
	{
	case 'A':case 'E':case 'I':case 'N':case 'O':case 'R':case 'S':case 'T':case 'U':
		return 1;
	case 'D':case 'G':return 2;
	case 'B':case 'C':case 'M':case 'P':return 3;
	case 'F':case 'H':case 'V':case 'W':case 'Y':return 4;
	case 'k':return 5;
	case 'J':case 'X':return 8;
	case 'Q':case 'Z':return 10;
	default: return 0;
	}

}

int scrabble(string vocabulary)
{
	int i, fraction = 0;
	string tempar = "";
	for (i = 0; i < vocabulary.length(); i++)
	{
		tempar = vocabulary[i];
		fraction += choose(tempar);
	}
	return fraction;
}