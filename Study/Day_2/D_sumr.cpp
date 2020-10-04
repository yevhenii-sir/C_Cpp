#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    int a, b;
    printf("Vvedit dva chisla: ");
    scanf("%d%d", &a, &b);
    printf("Suma = %d; Riznitsa = %d;", a + b, a - b);
    getch();
    return 0;
}