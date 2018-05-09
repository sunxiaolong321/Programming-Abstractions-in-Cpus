//现有1000个原子，每个原子每年有50%的概率会发生衰变，程序输出每年还剩多少个原子。
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//每个原子有50%的概率会发生半衰
int everyatom()
{
	if((double(rand()) / RAND_MAX)> 0.5)
	return 1;
	else return 0;
}

int atom(int number)
{
	int i, total = 0;
	for (i = 1; i <= number; i++)
	{
		total += everyatom();
	}
	return total;
}
