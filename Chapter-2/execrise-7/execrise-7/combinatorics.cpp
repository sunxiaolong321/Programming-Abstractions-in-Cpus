/*
*file combinatorisc
*/

#include "stdafx.h"
#include <iostream>
#include "combinatorics.h"
using namespace std;

double permutations(double n, double k)
{
	double i, total = 1;
	for (i = 1; i <= k; i++)
	{
		total *= n;
		n--;
	}
	return total;
}