#include <iostream>

using namespace std;

class Apple {
	int weight;
	string color;
public:
	static int count;
	Apple() { ++count; }
	Apple(int _weight, string _color) {
		weight = _weight;
		color = _color;
		++count;
	}
	void SetCount(int x) { count = x; }
};

int Apple::count = 0;

int main()
{
	Apple a, b(2, "orange"), c;
	cout << Apple::count << endl;
	Apple::count = 10;
	cout << Apple::count << endl;
}
