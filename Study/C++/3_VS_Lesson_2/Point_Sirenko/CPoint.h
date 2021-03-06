#pragma once
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
	void Avtor();
};

