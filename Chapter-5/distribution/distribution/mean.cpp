#include <vector>
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

//��������data��ƽ��ֵ
double mean(vector<double>&data)
{
	double total = 0, ave;
	for (int i = 0; i < data.size(); i++)
	{
		total += data.at(i);
	}
	ave = total / data.size;
	return ave;
}

//��׼��
double stddev(vector<double>&data)
{
	double summary = 0;
	double xi;
	for (int i = 0; i < data.size(); i++)
		summary += data.at(i);
	xi = summary / data.size();//����ƽ��ֵ
	double total = 0;
	for (int i = 0; i < data.size(); i++)
		total += pow(xi - data.at(i), 2);//����ƽ����
	double standard_deviation = sqrt(total / data.size());//���ر�׼��
	return standard_deviation;
}

