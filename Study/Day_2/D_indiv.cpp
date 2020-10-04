#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a, b;
    printf("Vvedi dva chisla: ");
    scanf("%d%d", &a, &b);
    printf("\ta + b = %d\n", a + b);
    printf("\ta - b = %d\n", a - b);
    printf("\ta * b = %d\n", a * b);
    printf("\ta / b = %.2f", a / (float)(b));
    getch();
    return 0;
}