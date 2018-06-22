#include <iostream>
#include <iomanip>
using namespace std;

//重写第二章windchill函数
void windchill()
{
	cout << fixed << right;
	cout << "clam";
	for (int x = 40; x >= -45; x -= 5)
	{
		cout << setw(4) << x;
	}
	cout << endl;
	for (int v = 5; v <= 60; v += 5)
	{
		cout << setw(4) << v;
		for (int t = 40; t >= -45; t -= 5)
		{
			int windchill = 35.74 + 0.6215*t - 35.75*pow(v, 0.16) + 0.4275*t*pow(v, 0.16);
			cout << setw(4) << windchill;
		}
		cout << endl;
	}
}
