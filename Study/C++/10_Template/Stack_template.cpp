#include <iostream>
#include <stdlib.h>
#include <conio.h>

template <class Stype> 
class stack {
	Stype* stck;
	int tos;
	int length;
public:
	stack(int size);
	~stack() { delete[] stck; }
	void push(Stype i);
	Stype pop();
};

template <class Stype> 
stack <Stype> ::stack(int size)
{
	stck = new Stype[size];
	if (!stck) {
		std::cout << "Unable to create stack." << std::endl;
		exit(1);
	}
	length = size;
	tos = 0;
}

template <class Stype> 
void stack<Stype> ::push(Stype i)
{
	if (tos == length) {
		std::cout << "Stack filled." << std::endl;
		return;
	}
	stck[tos] = i;
	tos++;
}

template <class Stype> Stype stack <Stype> ::pop()
{
	if (tos == 0) {
		std::cout << "The stack is empty." << std::endl;
		return 0;
	}
	tos--;
	return stck[tos];
}

int main()
{
	stack<int> a(10);
	stack<double> b(10);
	stack<char> c(10);
	int i;

	a.push(10);
	b.push(100.1);
	a.push(20);
	b.push(10 - 3.3);

	std::cout << a.pop() << " ";
	std::cout << a.pop() << " ";
	std::cout << b.pop() << " ";
	std::cout << b.pop() << std::endl;

	for (i = 0; i < 10; i++)
	{
		c.push(static_cast<char>('A' + i));
	}
	for (i = 0; i < 10; i++)
	{
		std::cout << c.pop();
	}
	std::cout << std::endl;
}