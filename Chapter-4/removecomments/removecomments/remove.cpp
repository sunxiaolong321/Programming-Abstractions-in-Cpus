#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string promptuserprompt(ifstream&infile, string prompt = "");
void removecomments(istream&is, ostream&os);
int main()
{
	ifstream infile;
	promptuserprompt(infile, "Input your filename: ");
	  
	infile.close();
}

void removecomments(istream&is, ostream&os)
{
	string line;
	while (true)
	{
		getline(is, line);
		if (line[0] == '/'&&line[1] == '/')
			continue;
		if (line[0] == '/'&&line[1] == '*')
		{
			for (int i = 0; i < line.length(); i++)
			{
				if (line[i - 1] == '*'&&line[i] == '/')
				{
					for (i; i < line.length(); i++)
						os << line[i];
					break;
				}
				getline(is, line);
			}
		}
		os << line;
	}
}

string promptuserprompt(ifstream&infile, string prompt)
{
	while (true)
	{
		cout << prompt;
		string filename;
		getline(cin, filename);
		infile.open(filename.c_str());
		if (!infile.fail())
			break;
		infile.clear();
		cout << "unbale to open this file, please try again." << endl;
		if (prompt == "")
			prompt == "input your filename";
	}
}
