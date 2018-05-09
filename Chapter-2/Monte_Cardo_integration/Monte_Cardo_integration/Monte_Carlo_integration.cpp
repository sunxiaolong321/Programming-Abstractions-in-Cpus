#include <iostream>
#include "integration.h"
using namespace std;

//蒙特卡洛积分法

int main()
{
	int darts;
	cout << " the darts number : " << endl;
	cin >> darts;
	cout << "the probility is" << calculater(darts) << endl;
	return 0;
}