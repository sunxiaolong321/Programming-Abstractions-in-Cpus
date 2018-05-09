#pragma once
//函数实现输入函数，输出所有天数。
#ifndef _calendar_h
#define _calendar_h

#include <string>

enum month { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

month dayInMonth(int i);

bool isLeapYear(int year);	//判断是否时闰年

std::string monthTostring(int m, int year);

#endif



