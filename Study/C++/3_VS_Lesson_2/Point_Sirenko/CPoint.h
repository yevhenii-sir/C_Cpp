#pragma once
#include <iostream>
class CPoint
{
	int x, y;
public:
	CPoint();
	CPoint(int, int);
	void Init(int, int);
	void Show();
	void Move(int, int);
	double Dist(const CPoint&);
	double operator-(CPoint&);
	void operator++();
	int operator==(CPoint&);
	void Avtor();
};

