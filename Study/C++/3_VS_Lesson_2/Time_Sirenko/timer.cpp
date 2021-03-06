#include "timer.h"
#include <iostream>
#include <ctime>

timer::timer()
{
	start = clock();
}

timer::~timer()
{
	clock_t end;
	end = clock();
	std::cout << "Timme passed: " << (end - start) / CLOCKS_PER_SEC << std::endl;
}