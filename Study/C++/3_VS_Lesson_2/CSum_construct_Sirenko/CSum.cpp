#include "CSum.h"
#include <iostream>

CSum::CSum()
{
	x = y = 0;
}

CSum::CSum(int _x, int _y)
{
	x = _x;
	y = _y;
}

CSum::CSum(CSum& another)
{
	*this = another;
}

void CSum::Init(int _x, int _y)
{
	x = _x;
	y = _y;
}

void CSum::Summa()
{
	std::cout << "a + b = " << x << " + " << y << " = " << x + y << std::endl;
}