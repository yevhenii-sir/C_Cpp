#include "CDate.h"

CDate::CDate()
{
	year = month = day = 0;
    _strdate_s(datestr);
    sscanf_s(datestr, "%d/%d/%d", &mm, &dd, &yy);
    yy += 2000;
}

void CDate::Init_Date(int _day, int _month, int _year)
{
    year = _year;
    month = _month;
    day = _day;
}

int CDate::Years_old()
{
    return yy - year;
}

void CDate::Date_of_birth()
{
    std::cout << "Day - " << day << "; Month - " << month << "; Year - " << year << ";" << std::endl;
}
