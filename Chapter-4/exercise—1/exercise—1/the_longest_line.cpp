#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string line(ifstream&infile, string long_line="");
//��дһ��������Ҫ������ļ�������С�
void longest_line()
{
	ifstream infile;
	string word1 = "";
	string word = line(infile, "input file: ");
	string line;
	string line_1 = "";
	while (getline(infile, line))
	{
		if (line.length() >= line_1.length())
			line_1 = line;
	}
	cout << "the longest line is: " << line_1 << endl;

}

//�����ļ�������
string line(ifstream&infile, string long_line)
{
	while (true)
	{
		cout << long_line;
		string filename;
		getline(cin, filename);
		infile.open(filename.c_str());
		if (!infile.fail())
			return filename;
		infile.clear();
		cout << "unable to open that file. try again." << endl;
		if (long_line == "")
			long_line = "inputfile: ";		
	}
}