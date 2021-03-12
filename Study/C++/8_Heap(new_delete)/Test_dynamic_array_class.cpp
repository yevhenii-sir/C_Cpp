#include <iostream>
#include <iomanip>
using namespace std;

class Test {
	int size;
	int* arrp;
public:
	Test(int _size)
	{
		arrp = new int[_size];
		size = _size;
	}

	void RandomArr(int min, int max)
	{
		for (int i = 0; i < size; i++)
		{
			arrp[i] = min + rand() % (max - min);
		}
	}

	void Show()
	{
		for (int i = 0; i < size; i++)
		{
			std::cout << setw(5) << arrp[i];
		}
		std::cout << std::endl;
	}

	int& operator [](int index)
	{
		return arrp[index];
	}

	~Test()
	{
		delete[] arrp;
	}
};

int main()
{
	int size_a;
	std::cout << "Input size array: ";
	std::cin >> size_a;
	Test arr1(size_a);
	std::cout << "Input range (min, max): ";
	int min, max;
	std::cin >> min >> max;
	arr1.RandomArr(min, max);
	arr1.Show();
	arr1[0] = 200;
	arr1.Show();
}