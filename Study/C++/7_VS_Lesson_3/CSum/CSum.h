#pragma once
#include <iostream>
using namespace std;
class CSum
{
	int a;
	int b;
public:
	CSum();
	CSum(int, int);
	CSum(CSum&);
	void Summa();
	int Rez();
	int operator == (CSum t);
	int operator > (CSum t);
	int operator < (CSum t);
	void operator ++(int);
	void operator -- (int);
	friend std::ostream& operator << (ostream& os, CSum t);
	friend istream& operator >> (istream& is, CSum &t);
};

