#include "CSum.h"
#include <iostream>

CSum::CSum()
{
	
}

CSum::CSum(int _a, int _b)
{
	a = _a;
	b = _b;
}

CSum::CSum(CSum& another)
{
	*this = another;
}

int CSum::Rez()
{
	return a + b;
}

int CSum::operator == (CSum t)
{
	return (t.a == a && t.b == b);
}

int CSum::operator > (CSum t)
{
	return (Rez() > t.Rez());
}

int CSum::operator < (CSum t)
{
	return (Rez() < t.Rez());
}

void CSum::operator ++(int)
{
	a++;
	b++;
}

void CSum::operator --(int)
{
	a--;
	b--;
}

void CSum::Summa()
{
	std::cout << "a + b = " << a << " + " << b << " = " << a + b << std::endl;
}

std::ostream& operator << (std::ostream& os, CSum t)
{
	return os << "\nSuma " << t.a << " + " << t.b << " = " << t.Rez() << std::endl;
}

istream& operator >> (istream& is, CSum& t)
{
	return is >> t.a >> t.b;
}