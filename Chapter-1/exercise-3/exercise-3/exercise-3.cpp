// exercise-3.cpp: 定义控制台应用程序的入口点。
//编写函数AVera个list，它读取成绩分数，并显示平均值。因为某些预备生成的成绩可能实际为0，你的程序应该使用-1作为输入结束的信号量。

#include "stdafx.h"
#include "iostream"
using namespace std;

const int SENTINEL = -1;

int main()
{
	int score, ave, i=0;
	int sum = 0;
	while (true)
	{
		cout << "please input your score: ";
		cin >> score;
		if (score == SENTINEL)
			break;
		sum += score;
		i++;
	}
	ave = sum / i;
	cout << "Total:  " << i << endl;
	cout << "The sum is:  " << sum << endl;
	cout << "the average is: " << ave << endl;
    return 0;
}

