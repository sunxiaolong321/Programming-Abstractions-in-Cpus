//����1000��ԭ�ӣ�ÿ��ԭ��ÿ����50%�ĸ��ʻᷢ��˥�䣬�������ÿ�껹ʣ���ٸ�ԭ�ӡ�
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//ÿ��ԭ����50%�ĸ��ʻᷢ����˥
int everyatom()
{
	if((double(rand()) / RAND_MAX)> 0.5)
	return 1;
	else return 0;
}

int atom(int number)
{
	int i, total = 0;
	for (i = 1; i <= number; i++)
	{
		total += everyatom();
	}
	return total;
}
