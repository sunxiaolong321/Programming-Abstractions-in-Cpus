#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;

//编写一个函数，要求读取一个文件并输出文件行数，单词总数和字符总数。
string  filename(ifstream&infile, string input = "");
//输出文件名
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

//输出多少字符
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

//输出多少单词
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

//输入文件内容
void  content()
{
	ifstream infile;
	filename(infile, "input name: ");
	string line;
	int i = 0;
	int x = 0;			//d定义字符
	int y = 0;			//定义单词
	while (getline(infile, line))
	{
		x += chars(line);
		y += words(line);
		i++;
	}
	cout << right;
	cout << "chars： " << setw(6) << x << endl;
	cout << "words： " << setw(6) << y << endl;
	cout << "lines： " << setw(6) << i << endl;
}