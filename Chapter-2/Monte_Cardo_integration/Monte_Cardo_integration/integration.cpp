#include <cmath>
using namespace std;



//�������0��1֮���С����
double random_number()
{
	double decimal;
	decimal = double(rand()) / RAND_MAX;
	return decimal;
}

//�������-1��1֮���С����
double random_decimal()
{
	double x;
	x = random_number();
	if (((double(rand())) / RAND_MAX) > 0.5)
		return x;
	else return 0 - x;
}

//���x^2+y^2<1������1��
int round()
{
	double x, y, cycle;
	x = random_decimal();
	y = random_decimal();
	cycle = pow(x, 2) + pow(y, 2);
	if (cycle < 1)
		return 1;
	else return 0;
}

double calculater(int darts)
{
	double i, qwer = 0, y = 0, probability = 0;
	for (i = 1; i <= darts; i++)
	{
		y = round();
		 qwer = qwer + y;
	}
	probability = qwer / double(darts);
	return probability;
}
