#include "CPersona.h"
#include <iostream>
#include <cstring>
using namespace std;

void CPersona::Init(char *_PIB, int _year_of_birth, char _sex)
{
	strcpy_s(PIB, _PIB);
	year_of_birth = _year_of_birth;
	sex = _sex;
}

void CPersona::Years_old(int year_now)
{
	cout << "Persone seichas " << year_now - year_of_birth << " let" << endl;
}

void CPersona::Show_info()
{
	cout << "PIB - " << PIB << "God roshdenia - " << year_of_birth << '\n'
		<< "Stat - " << sex << endl;
}

void CPersona::Avtor()
{
	std::cout << "Avtor - Yevhenii Sirenko" << std::endl;
}