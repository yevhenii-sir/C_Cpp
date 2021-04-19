#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a, b;
    printf("Input two numbers: ");
    scanf("%d%d", &a, &b);
    printf("\ta + b = %d\n", a + b);
    printf("\ta - b = %d\n", a - b);
    printf("\ta * b = %d\n", a * b);
    printf("\ta / b = %.2f", a / (float)(b));
    printf("\nCreate By Yevhenii Sirenko\n");
    getch();
    return 0;
}
