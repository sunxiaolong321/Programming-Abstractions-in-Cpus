# include <string>
using namespace std;

//�������ַ���ͷ��βɾ���հ��ַ�
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
