#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;
//���غ�������������is����vector����vec���������ݣ����������У�ÿһ��vector�����Ԫ�س������������һ���У�����һֱ��ȡԪ��֪�����л����ļ�ĩβ
void readvector(istream&is, vector<int>&vec);
double stringtodouble(string ch);
string promptuserforfile(ifstream&infile, string prompt = "");

int main()
{
	ifstream infile;
	vector<int> lines;
	promptuserforfile(infile, "input file; ");
	readvector(infile, lines);
	infile.close();
	for (int i = lines.size() - 1; i >= 0; i--)
	{
		cout << lines[i] << endl;
	}
	return 0;
}
void readvector(istream&is, vector<int>&vec)
{
	string ch;
	while (getline(is,ch))
	{
		double sh;
		sh = stringtodouble(ch);
		vec.push_back(sh);
	}
}

double stringtodouble(string ch)
{
	istringstream stream(ch);
	double value;
	stream >> value >> ws;
	if (stream.fail() || !stream.eof())
	{
		cout<<"stringtointerger: illegal integer format";
	}
	return value;
}

string promptuserforfile(ifstream & infile, string prompt)
{
	while (true)
	{
		cout << prompt;
		string filename;
		getline(cin, filename);
		infile.open(filename.c_str());
		if (!infile.fail())
			return filename;
		infile.clear();
		cout << "can't input" << endl;
		if (prompt == "")
			prompt = "input file: ";
	}
}
