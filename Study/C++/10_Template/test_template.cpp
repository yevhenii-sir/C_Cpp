#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Point
{
	int x, y, z;
public:
	Point()
	{
		x = y = z = 0;
	}
	Point(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
};

template <class T1, class T2>
class MyClass
{
	T1 value; 
	T2 value2;
public:
	MyClass(T1 value, T2 value2)
	{
		this->value = value;
		this->value2 = value2;
	}
	void DataTypeSize()
	{
		cout << "Value: " << sizeof(value) << endl
			<< "Value2: " << sizeof(value2) << endl;
	}
};

int main()
{
	Point a;
	int p = 5;

	MyClass<int, Point> c(p, a);
	c.DataTypeSize();
}