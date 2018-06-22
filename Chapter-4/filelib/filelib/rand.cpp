#include <cstdlib>
#include <cmath>
using namespace std;

int randominteger(int low, int high)
{
	double d = rand() / (double(RAND_MAX) + 1);
	double s = d * (double(high) - low + 1);
	return int(floor(low + s));
}
