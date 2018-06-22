#include <vector>
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

//返回数组data的平均值
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

//标准差
double stddev(vector<double>&data)
{
	double summary = 0;
	double xi;
	for (int i = 0; i < data.size(); i++)
		summary += data.at(i);
	xi = summary / data.size();//计算平均值
	double total = 0;
	for (int i = 0; i < data.size(); i++)
		total += pow(xi - data.at(i), 2);//计算平方和
	double standard_deviation = sqrt(total / data.size());//返回标准差
	return standard_deviation;
}

