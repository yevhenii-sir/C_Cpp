#include "CSum.h"
#include <iostream>

void CSum::Init(int _x, int _y)
{
	x = _x; y = _y;
}

void CSum::Summa()
{
	std::cout << x << " + " << y << " = " << x + y << std::endl;
}

void CSum::Avtor()
{
	std::cout << "Avtor - Yevhenii Sirenko" << std::endl;
}