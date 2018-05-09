#include <iomanip>
#include <cstdlib>
using namespace std;

double randomInteger()
{
	double realnumber;
	realnumber = double(rand()) / (RAND_MAX);
	return realnumber;
}