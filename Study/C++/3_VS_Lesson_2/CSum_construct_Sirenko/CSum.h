#pragma once
class CSum
{
	int x;
	int y;
public:
	CSum();
	CSum(int _x, int _y);
	CSum(CSum&);
	void Init(int _x, int _y);
	void Summa();
};

