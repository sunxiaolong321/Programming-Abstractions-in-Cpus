#pragma once
//����ʵ�����뺯�����������������
#ifndef _calendar_h
#define _calendar_h

#include <string>

enum month { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

month dayInMonth(int i);

bool isLeapYear(int year);	//�ж��Ƿ�ʱ����

std::string monthTostring(int m, int year);

#endif



