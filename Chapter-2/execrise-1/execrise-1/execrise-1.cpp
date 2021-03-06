// execrise-1.cpp: 定义控制台应用程序的入口点。
/*在C++中，当一个浮点数被转换为整数型时，
数值的小数部分会被直接舍去。
因此，将4.99999转换为整数型时，结果为4.在许多场合，将浮点数转换为最接近的整数型会更有用。
现有一个浮点型变量x，你可以通过将变量加上0.5并舍去小数部分来得到最接近整数。
因此数值四舍五入取整时会朝着数轴上0的方向，所以负数取整时需要为其数值减去0.5，而不是加上0.5.
编写一个roundToNearestInt（x）函数，将浮点数取整为与其最接近的整数。
并编写一个合适的main函数来验证它。*/

#include "stdafx.h"
#include "iostream"
using namespace std;

void roundToNearestInt(float x);

int main()
{
	float x;
	cin >> x;
	roundToNearestInt(x);
    return 0;
}

void roundToNearestInt(float x)
{
	int y;
	if (x >= 0)
	{
		x += 0.5;
		y = x;
	}
	else
	{
		x -= 0.5;
		y = x;
	}
	cout << y << endl;

}

