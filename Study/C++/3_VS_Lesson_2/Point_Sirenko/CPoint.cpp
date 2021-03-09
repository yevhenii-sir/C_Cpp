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

void CPoint::Move(int dx, int dy)
{
	x += dx;
	y += dy;
}

double CPoint::Dist(const CPoint& pt)
{
	return (sqrt(pow(pt.x - x, 2) + pow(pt.y - y, 2)));
}

double CPoint::operator-(CPoint& pt)
{
	return Dist(pt);
}

void CPoint::operator++()
{
	x++;
	y++;
}

int CPoint::operator==(CPoint& pt)
{
	return (x == pt.x && y == pt.y);
}

void CPoint::Avtor()
{
	std::cout << "Create by Yevhenii Sirenko" << std::endl;
}