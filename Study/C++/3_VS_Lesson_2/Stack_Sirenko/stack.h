#pragma once
#define SIZE 10

class stack
{
	char stck[SIZE];
	int tos;
public:
	stack();
	void push(char ch);
	char pop();
	int get_tos();
};

