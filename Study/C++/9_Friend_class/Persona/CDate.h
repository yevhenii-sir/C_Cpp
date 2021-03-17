#pragma once
#include <iostream>
#include <ctime>

class CPersona;

class CDate
{
	int year, month, day;
	char datestr[10]; int dd, mm, yy;
	friend class CPersona;
public:
	CDate();
	void Init_Date(int, int, int);
	int Years_old();
	void Date_of_birth();
};

