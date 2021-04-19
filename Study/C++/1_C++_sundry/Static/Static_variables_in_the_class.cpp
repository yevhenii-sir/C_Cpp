#include <iostream>

using namespace std;

class Apple {
	int weight;
	string color;
	static int count;
public:
	Apple() { ++count; }
	Apple(int _weight, string _color) {
		weight = _weight;
		color = _color;
		++count;
	}
	static int GetCount() {
		return count;
	}
	static void SetCount(int x) { count = x; }
};

int Apple::count = 0;

int main()
{
	Apple a, b(2, "orange"), c;
	cout << Apple::GetCount() << endl;
	Apple::SetCount(10);
	cout << Apple::GetCount() << endl;
}
