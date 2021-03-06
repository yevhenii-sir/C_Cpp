#include <stdio.h>
#include <conio.h>
#include <math.h>
#include "Test_2.cpp"

int x1, x2;

int main()
{
    x1 = 10;
    x2 = 20;
    Funcs(x1, x2);
    printf("%d %d", x1, x2);
    return 0;
}