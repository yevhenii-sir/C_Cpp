#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, sum;
    printf("Введите А и В: ");
    scanf("%d%d", &a, &b);
    printf("  %d\n", a);
    printf("+\n");
    printf("  %d\n", b);
    sum = a + b;
    printf("----\n");
    printf("  %d");
    return 0;
}