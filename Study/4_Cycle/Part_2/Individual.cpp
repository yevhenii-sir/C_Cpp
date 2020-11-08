#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    long int fact;
    int n, x;
    double Z;
    printf("Введіть x, n: ");
    scanf("%d%d", &x, &n);
    printf("---------------------------------------");
    Z = 1 + x;
    for (int i = 2; i <=n; i++)
    {
        fact = 1;
        for (int j = 2; j <= i; j++)
        {
            fact *= j;
        }
        Z += pow(x, i) / fact;
        printf("\nZ = %7.2lf; x^2 = %7.0f; %d! = %ld;", Z, pow(x, i), i, fact);
    }
    printf("\n---------------------------------------\nСума членів ряду = %.2lf", Z);
    printf("\n\nCreate by Yevhenii Sirenko");
    getch();
    return 0;
}