// exercise-7.cpp: 定义控制台应用程序的入口点。
//莱布尼兹函数：数学常量PI可以用下面的公式计算

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int i;
	double sum = 0;
	for (i = 1; i <= 10000; i++)
	{
		if (i % 2 == 0)
			sum -= (1 / (2 * double(i) - 1));
		else
			sum += (1 / (2 * double(i) - 1));
	}
	cout << sum << endl;
	return 0;
}

