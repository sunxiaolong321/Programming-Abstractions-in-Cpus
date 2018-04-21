// exercise-8.cpp: 定义控制台应用程序的入口点。
//编写一个程序，计算将四分之一圆划分成10000个矩形的面积。

#include "stdafx.h"
#include "iostream"
#include "math.h"
using namespace std;

int main()
{
	int i;
	double radius, area = 0, w, x, h, y;
	cout << "enter the radius: ";
	cin >> radius;
	w = radius / 10000;
	x = w / 20000;
	y = x;
	for (i = 1; i <= 10000; i++)
	{
		h = sqrt(radius*radius - y * y);
		y += 2 * x;
		area += h * w;
	}
	cout << "the area is : " << area << endl;
    return 0;
}

