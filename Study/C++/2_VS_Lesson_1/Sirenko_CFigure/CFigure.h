#pragma once
class CFigure
{
	char col;
	int rad;
public:
	void Init(char, int);
	void Show();
	void Move(char, int);
	void Avtor();
	int Chek_valid(char, int);
};

