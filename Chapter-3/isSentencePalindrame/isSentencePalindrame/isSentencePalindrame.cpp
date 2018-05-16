#include <string>
#include <cctype>
#include <sstream>
using namespace std;

//�����ޱ����ŵ���str
string newSentencePalindrame(string str)
{
	string str1;
	unsigned int i;
	for (i = 0; i < str.length(); i++)
	{
		if (isalpha(str[i]))
			str1 += str[i];
	}
	return str1;
}

//��дһ�����ĺ��������Ա����źʹ�Сд������������һ��������ȷ��
bool isSentencePalindrame(string str)
{
	string str1;
	str1 = newSentencePalindrame(str);
	int i, n = str1.length();
	for (i = 0; i < n / 2; i++)
	{
		if (toupper(str1[i]) != toupper(str1[n - i - 1]))
			return false;
	}
	return true;
}

/*��дһ������creatRegularPlural��word)������ѭһ�¼���ԭ�򣬺�������word�ĸ�����ʽ
*���������s, x, z, ch��sh��β���ٵ���ĩβ���es��
*���������y��β��yǰ��һ���������޸�yΪies��
*����������ڵ��ʺ��s���ɡ�
*/
string creatRegularPlural(string word)
{
	int i = word.length() - 1;
	if (word[i] == 's' || word[i] == 'x' || word[i] == 'z' || (word[i - 1] == 'c'&&word[i] == 'h') || (word[i - 1] == 's'&&word[i] == 'h'))
	{
		word += "es";
		return word;
	}
	if ((word[i - 1] != 'a' || word[i - 1] != 'e' || word[i - 1] != 'i' || word[i - 1] != 'o' || word[i - 1] != 'u') && word[i] == 'y')
	{
		word[i] = 'i';
		word += "es";
		return word;
	}
	return word += "s";		
}

//��дһ����������������n��������ʽ��
string createOrdinalForm(int n)
{
	int i = n % 10;
	string ordinal_number, cardinal_number;
	if (i == 1 && n != 11)
	{
		return ordinal_number = "st";
	}
	if (i == 2 && n != 12)
	{
		return ordinal_number = "nd";
	}
	if (i == 3 && n != 13)
	{
		return ordinal_number = "rd";
	}
	return ordinal_number = "th";
}

//���뺯��
string erase(string digits, char c, int b )
{
	int i, j;
	string new_digits;
	for (i = 0, j = 0; i < digits.length(); i++,j++)
	{
		if (i = b)
		{
			new_digits[j] = c;
			j++;
		}
		new_digits[j] = digits[i];	
	}
	return new_digits;
}

//���ַ������������
string contast(string digits)
{
	int i = digits.length() - 1;
	string new_digits;
	for (i; i >= 0; i--)
		new_digits += digits[i];
	return new_digits;
}

/*
*ʵ�ֺ�������ȡһ�����ֵ�ʮ���������ַ�����Ȼ�󷵻ش��ҿ�ʼ��ÿ��λ�������һ����������
*/
string addCommas(string digits)
{
	int i, j;
	string new_digits, con_digits = contast(digits);
	for (i = 0; i < digits.length(); i++)
	{
		if (i > 2 && i % 3 == 0)
			new_digits += ',';
		new_digits += con_digits[i];
	}
	return contast(new_digits);
}