#pragma once
class CPersona
{
	char PIB[30];
	int year_of_birth;
	char sex;
public:
	void Init(char*, int, char);
	void Years_old(int);
	void Show_info();
	void Avtor();
};

