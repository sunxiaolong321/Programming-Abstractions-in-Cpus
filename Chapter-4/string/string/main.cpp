#include <iostream>
#include <string>
#include <sstream>
using namespace std;
/*
double stringtoreal(string str)
{
	istringstream stream(str);
	double value;
	stream >> value >> ws;
	if (stream.fail() || !stream.eof())
		error("stringtoinerger: inlegal integer format;");
	return value;
}
*/
//将字符串函数转变成整数
double stringtoreal(string str)
{
	istringstream stream(str);
	double value;
	stream >> value >> ws;
	if(stream.fail()||!stream.eof())
		error("stringtoinerger: inlegal integer format;");
	return value;
}
//将整数转变成字符串流
double realtostring(double n)
{
	ostringstream stream;
	stream << n;
	stream.str();
}