#include <stdio.h>
#include <conio.h>

int main ()
{
    int n = 100111;
    n = n & 5;
    printf("N = %d", n);
    getch();
    return 0;
}
