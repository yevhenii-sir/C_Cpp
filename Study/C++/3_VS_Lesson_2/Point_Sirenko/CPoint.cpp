#include "CPoint.h"
#include <iostream>
#include <cmath>

CPoint::CPoint()
{
	x = y = 0;
}

CPoint::CPoint(int _x, int _y)
{
	x = _x;
	y = _y;
}

void CPoint::Init(int _x, int _y)
{
	x = _x;
	y = _y;
}

void CPoint::Show()
{
	std::cout << "x = " << x << "\ny = " << y << std::endl;
}

void CPoint::Move(int _x, int _y)
{
	x = _x;
	y = _y;
}

double CPoint::Dist(const CPoint& pt)
{
	return (sqrt(pow(pt.x - x, 2) + pow(pt.y - y, 2)));
}

void CPoint::Avtor()
{
	std::cout << "Create by Yevhenii Sirenko" << std::endl;
}