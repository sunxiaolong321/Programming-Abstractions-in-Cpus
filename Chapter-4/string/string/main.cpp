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
//���ַ�������ת�������
double stringtoreal(string str)
{
	istringstream stream(str);
	double value;
	stream >> value >> ws;
	if(stream.fail()||!stream.eof())
		error("stringtoinerger: inlegal integer format;");
	return value;
}
//������ת����ַ�����
double realtostring(double n)
{
	ostringstream stream;
	stream << n;
	stream.str();
}