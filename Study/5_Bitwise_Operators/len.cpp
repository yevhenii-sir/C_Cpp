#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 5, b = 5, c = 5;
    if (a == b ^ b == c ^ c == a) printf("LOx pid");
    return 0;
}
