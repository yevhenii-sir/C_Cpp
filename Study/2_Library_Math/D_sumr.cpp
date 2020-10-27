#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    int a, b, t;
    printf("Vvedit dva chisla: ");
    scanf("%d%d", &a, &b);
    t = a;
    a = a + b;
    b = t - b;
    printf("Suma = %d; Riznitsa = %d;\n",a, b);
    printf("Create By Yevhenii Sirenko\n");
    getch();
    return 0;
}