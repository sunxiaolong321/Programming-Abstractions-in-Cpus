#include <iostream>
#include <string>
#include "trim.h"
using namespace std;

int main()
{
	string x;
	cout << "number" << endl;
	getline(cin, x);
	cout << trim(x) << endl;
	return 0;
}