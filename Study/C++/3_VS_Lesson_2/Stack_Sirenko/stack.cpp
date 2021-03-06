#include "stack.h"
#include <iostream>

stack::stack()
{
    std::cout << "robota konstruktora steku" << std::endl;
    tos = 0;
}

void stack::push(char ch)
{
    if (tos == SIZE) {
        std::cout << "Stak povni" << std::endl;
        return;
    }
    stck[tos] = ch;
    tos++;
}


char stack::pop()
{
    if (tos == 0) {
        std::cout << "Stek porozhni!" << std::endl;
        return 0;
    } tos--;
    return stck[tos];
}

int stack::get_tos()
{
    return tos;
}