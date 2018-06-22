#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

string promptuser(ifstream&infile, string prompt);
int main()
{
	ifstream infile;
	promptuser(infile, "input your filename");
	while(infile.get())
		



}

string promptuser(ifstream&infile, string prompt)
{
	while(true)
	{
		cout << prompt;
		string filename;
		getline(cin, filename);
		infile.open(filename.c_str());
		if (!infile.fail())
			break;
		infile.clear();
		cout << "unbale to open this file, please try again." << endl;
		if(prompt == "")
			prompt = "input your filename";
	}
}