# include <string>
using namespace std;

//产生新字符从头到尾删除空白字符
string trim(string str)
{
	int i, j = 0;
	string tim="";
	for (i = 0; i < str.length(); i++)
	{
		while(str[i] == ' ')
			i++;
		tim += str[i];
	}
	return tim;
}
