// exercise-4.cpp: 定义控制台应用程序的入口点。
//使用“while”那节的digitsum函数作为模板，编写一个程序，读取一个整数，然后逆序输出该整数中的各位数。
/*
int digitSum（int n){
	int sum=0;
	while(n>0){
	sum += n%10;
	n /=10;
	}
	return sum;
}
*/

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int x, a;
	cout << "This programm reverses the digite in an integer" << endl;
	cout << "Enter a positive integer: ";
	cin >> x;
	cout << "The reversed integer is; ";
	while (x > 0)
	{
		a = x % 10;
		cout << a;
		x /= 10;
	}
	cout << endl;
	return 0;
}