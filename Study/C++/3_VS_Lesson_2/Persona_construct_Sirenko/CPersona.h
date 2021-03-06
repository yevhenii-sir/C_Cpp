#pragma once
#include <string>
using namespace std;

class CPersona
{
	string PIB;
	int year;
	char stat;
	int test;
public:
	CPersona();
	CPersona(string _PIB, int, char);
	CPersona(CPersona&);
	void Init(string _PIB, int _year, char _stat);
	int Rokiv();
	void Show();
	void Avtor();
};

