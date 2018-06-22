#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double PI = 3.1415926;
const double SPEED_OF_LIGHT = 2.9979E+8;
const double FINE_STRUCIURE = 7.257352E-3;

void printPrecisionTable();

int main()
{
	cout << uppercase << right << endl;
	cout << "default format :" << endl << endl;
	printPrecisionTable();
	cout << endl << "fixed fotmat:" << endl << fixed << endl << endl;
	printPrecisionTable();
	cout << endl << "scientific format: " << scientific << endl << endl;
	printPrecisionTable();
	return 0;
}

void printPrecisionTable()
{
	cout << "prec |		PI		| speed of light | fine structure" << endl;
	cout << "------|------------+------------+------------" << endl;
	for (int prec = 0; prec <= 6; prec += 2)
	{
		cout << setw(4) << prec << "    |";
		cout << " " << setw(12) << setprecision(prec) << PI << "  ";
		cout << " " << setw(16) << setprecision(prec) << SPEED_OF_LIGHT << "  |";
		cout << " " << setw(12) << setprecision(prec) << FINE_STRUCIURE << endl;
	}
}