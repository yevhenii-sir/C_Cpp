#include "CFigure.h"
#include <iostream>

void CFigure::Init(char _col, int _rad)
{
	col = _col;
	rad = _rad;
}

void CFigure::Show()
{
	std::cout << "Klika - " << col << rad << std::endl;
}

void CFigure::Move(char _col, int _rad)
{
	if (Chek_valid(_col, _rad))
	{
		int a = static_cast<int>(col);
		int b = static_cast<int>(_col);
		if (((a == b + 1) || (a == b - 1) || (a == b)) && ((_rad == rad + 1) || (_rad == rad - 1) || (_rad == rad)))
		{
			col = _col;
			rad = _rad;
			std::cout << "Peremishcheno!" << std::endl;
		}
		else
		{
			std::cout << "Ne vdalosa peremistiti!" << std::endl;
		}

	}
}

int CFigure::Chek_valid(char _col, int _rad)
{
	if ((_col >= 'A') && (_col <= 'H') && (_rad > 0) && (_rad <= 8))
	{
		return 1;
	}
	else return 0;
}

void CFigure::Avtor()
{
	std::cout << "Avtor - Yevhenii Sirenko" << std::endl;
}
