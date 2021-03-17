#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "CDate.h"
using namespace std;

class CDate;
class CPersona;

class CPersona
{
	string PIB;
	char stat;
	CDate objDate;
public:
	CPersona();
	CPersona(string, char, int, int, int);
	CPersona(CPersona&);
	void Init(string, char, int, int, int);
	void Show();
	void System_date();
	int operator==(CPersona&);
	int operator-(CPersona&);
	void operator>(CPersona&);
	CPersona Mladshi(CPersona&);
	void Avtor();
};

