#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>
#include <fstream>
#include "rand.h"
using namespace std;

string filename(ifstream&infile, string input);
char chars(char ch);

int main()
{
	ifstream infile;
	filename(infile, "input: ");
	char ch;
	char newch=' ';
	while (infile.get(ch))
	{
		if (isalpha(ch))
		{
			char newch = chars(ch);
			cout.put(newch);
		}
		else
		cout.put(ch);
	}
}

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
		cout << "unable to open the file, please try again." << endl;
		if (input == "")
			input = "input: ";
	}
}

//编写一个1—26之间的随机数
char chars(char ch)
{
	ch += fabs(randominteger(0, 26));
	if ((ch > 90 && ch < 97) || ch > 122)
		ch = ch - 26;
	return char(ch);
}