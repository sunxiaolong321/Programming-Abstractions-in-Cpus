#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;

//��дһ��������Ҫ���ȡһ���ļ�������ļ������������������ַ�������
string  filename(ifstream&infile, string input = "");
//����ļ���
string filename(ifstream&infile,string input)
{
	while (true)
	{
		cout << input;
		string filename;
		getline(cin, filename);
		infile.open(filename.c_str());
		if (!infile.fail())
			return filename;
		infile.clear();
		cout << "can't open that file, try again" << endl;
		if (input == "")
			input = "input name: ";
	}
}

//��������ַ�
int chars(string line)
{
	int x=0;
	for (int i = 0; i < line.length(); i++)
	{
		if (isalpha(line[i]))
			x++;
	}
	return x;
}

//������ٵ���
int words(string line)
{
	int x = 1;
	for (int i = 0; i < line.length(); i++)
	{
		if (ispunct(line[i])||isspace(line[i]))
			x++;
	}
	return x;
}

//�����ļ�����
void  content()
{
	ifstream infile;
	filename(infile, "input name: ");
	string line;
	int i = 0;
	int x = 0;			//d�����ַ�
	int y = 0;			//���嵥��
	while (getline(infile, line))
	{
		x += chars(line);
		y += words(line);
		i++;
	}
	cout << right;
	cout << "chars�� " << setw(6) << x << endl;
	cout << "words�� " << setw(6) << y << endl;
	cout << "lines�� " << setw(6) << i << endl;
}