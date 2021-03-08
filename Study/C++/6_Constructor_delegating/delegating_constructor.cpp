#include <iostream>

using std::string;

class Human {
	string name;
	int age;
	int weight;
public:
	Human(string _name)
	{
		name = _name;
		age = 0;
		weight = 0;
	}
	Human(string _name, int _age) : Human(_name)
	{
		age = _age;
	}
	Human(string _name, int _age, int _weight) : Human(_name, _age)
	{
		weight = _weight;
	}
	void Show()
	{
		std::cout << "Name: " << name << ";\nAge: " << age << ";\nWeight: " << weight << ';' << std::endl;
	}
};

int main()
{
	Human hum1("leonardo", 29), hum2("Rafael");
	std::cout << "Human #1: " << std::endl;
	hum1.Show();
	std::cout << std::endl << "Human #2: " << std::endl;
	hum2.Show();
}
