#include <string>
using namespace std;

/*
*ʵ�ֺ��������endsWith��str,suffix),�����Ĺ���Ϊ���str��suffix����β���򷵻�true��
*endsWith����Ӧ������ڶ����������ַ�������һ���ַ�
*/
bool endsWith(string str, string suffix)
{
	return str.substr(str.length() - suffix.length()) == suffix;
}


/*
*ʵ��һ�����ɺ���substr��str, pos, n), �ú������ش�str��pos��λ�ÿ�ʼ��������n���ַ��ĳ��ȡ�
*ȷ����ĺ�����ȷ��Ӧ�������¹���
*���nȱʧ���ߴ����ַ������ȣ��ִ�Ӧ�����쵽ԭ�ַ�����ĩβ
*���pos�����ַ����ĳ��ȣ�substrӦ��ʹ��һ�����ʵ���Ϣȥ����error��
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