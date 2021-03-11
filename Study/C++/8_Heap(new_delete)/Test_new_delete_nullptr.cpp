#include <iostream>

int main()
{
	int* pt = new int;
	*pt = 10;

	std::cout << *pt << std::endl;

	delete pt;

	pt = nullptr;

	if (pt != nullptr)
	{
		std::cout << pt << std::endl;
	}
}