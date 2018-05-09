#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "random.h"
#include "atom.h"
using namespace std;

int main()
{
	int x, i, number;
	cout << "plase input your recycle number:" << endl;
	cin >> x;
	for (i = 0; i < x; i++)
		cout << randomInteger() << endl;
	cout << "please input your atom number:" << endl;
	cin >> number;
	i = 1;
	cout << "there are " << number << " atoms initially"<<endl;
	while (number > 0)
	{
		number = atom(number);
		cout << "there are " << number << " atoms at the end of year" << i<<endl;
		i++;
	}
	return 0;
}