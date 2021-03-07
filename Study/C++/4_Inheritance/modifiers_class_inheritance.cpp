#include <iostream>

using std::string;

class A {
public:
	string msgOne = "One";
private:
	string msgTwo = "Two";
protected:
	string msgThree = "Three";
};

class B : public A{
public:
	void Show() {
		std::cout << "1 - " << msgOne << ";\n2 - not avaliable;\n3 - " << msgThree << ';' << std::endl;
	}
};

int main()
{
	B b;
	b.Show();
}