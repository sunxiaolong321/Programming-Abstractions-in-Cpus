#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979323846;

//ʵ����������ʽ��������������ң�����ֵ��
void trigonometric()
{
	cout << "theta | sin(theta) | cos(theta) " << endl;
	cout << "------|------------|------------" << endl;
	cout << fixed << right;
	for (int x = -90; x <= 90; x += 15)
	{
		double y = (x*PI) / 180;
		cout << setw(6) << x << "|";
		cout << setw(12) << setprecision(8) << sin(y) << "|";
		cout << setw(12) << setprecision(8) << cos(y) << "|" << endl;
		}
}