/*
*������Ϸ���������ΪA�� E��I��L��N��O��R��S��T��U����Ϊ1
*���ΪD��G����Ϊ2
*B��C��M��P����Ϊ3
*F/H/V/W/Y����Ϊ4
*K/����Ϊ5
*J/X����Ϊ8
*Q/Z����Ϊ10
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