#include "stdafx.h"
#include <string>
#include "calendar.h"
using namespace std;

month dayInMonth(int i)
{
	return month(i);
}

//如果是闰年
bool isLeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}

string monthTostring(int m,int year)
{
	switch (m)
	{
	case 0:return "has 31 days"; break;
	case 1: {
		if (isLeapYear(year))
		return "has 29 days";
			else return "has 28 days";
			break; }
	case 2:return "has 31 days"; break;
	case 3:return "has 30 days"; break;
	case 4:return "has 31 days"; break;
	case 5:return "has 30 days"; break;
	case 6:return "has 31 days"; break;
	case 7:return "has 31 days"; break;
	case 8:return "has 30 days"; break;
	case 9:return "has 31 days"; break;
	case 10:return "has 30 days"; break;
	case 11:return "has 31 days"; break;
	}
}