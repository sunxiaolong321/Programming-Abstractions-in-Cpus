#include <iostream>
#include <string>
#include "coss.h"
using namespace std;

int main()
{
	int i = 0, j = 0, h = 0;
	while (j != 3)
	{
		h = random();
		cout << coin(h) << endl;;
		j += h;
		if (h == 0)
			j = 0;
		i++;
	}
	cout << "It took " << i << "flips to get 3 consecuticive heads" << endl;
}