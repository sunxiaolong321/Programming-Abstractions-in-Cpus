// exercise-1.cpp: 定义控制台应用程序的入口点。
//编写一个函数，它读取正整数N，计算前N个奇数之和。例如，N是4，你的程序的结果是计算1+3+5+7，结果为16.

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	int x, i, N, sum = 0;
	cout << "please input your number: " << endl;
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		x = 2 * i - 1;
		sum += x;
		cout << x;
		if (i < N)
			cout << "+";
	}
	cout << "=" << sum << endl;
	return 0;
}