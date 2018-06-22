#include <fstream>
#include <iostream>
#include <string>
using namespace std;

string userprompt(fstream&infile, string prompt = "");

int main()
{
	fstream infile;
	userprompt(infile, "input your number: ");
	char ch;
	while (infile.get(ch))
	{
		if (ch == 'o' || ch == 'O')
			infile.get(ch);
		cout.put(ch);
	}
}
string userprompt(fstream&infile, string prompt)
{
	while (true)
	{
		cout << prompt;
		string infilename;
		getline(cin, infilename);
		infile.open(infilename.c_str());
		if (!infile.fail())
			return infilename;
		cout << "infilename can't open,please tru again" << endl;
		infile.clear();
		if (prompt == "")
			prompt = "input your number: ";
	}
}