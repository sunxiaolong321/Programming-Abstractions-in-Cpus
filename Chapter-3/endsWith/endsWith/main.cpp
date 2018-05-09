#include <iostream>
#include <string>
#include "endsWith.h"
using namespace std;

int main()
{
	string std, suffix;
	cout << "your string:" << endl;
	cin >> std;
	cout << "the string you wang to choose" << endl;
	cin >> suffix;
	cout << substr(std, suffix, 2) << endl;
	if (endsWith(std, suffix))
		cout << "true" << endl;
	else
		cout << "false" << endl;
	return 0;
}