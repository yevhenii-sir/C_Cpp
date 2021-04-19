#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, sum;
    printf("Input A and B: ");
    scanf("%d%d", &a, &b);
    printf("  %d\n", a);
    printf("+\n");
    printf("  %d\n", b);
    sum = a + b;
    printf("----\n");
    printf("  %d", sum);
    return 0;
}
