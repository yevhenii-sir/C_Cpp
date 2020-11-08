#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main (void)
{
    int x, n, i = 0, sum = 0;
    randomize();
    printf("\nVvedi kilkist chisel N = ");
    scanf("%d", &n);
    printf(" Zadumani chisla : \n");
    for (i = 0; i < n; i++)
    {
        x = rand()%20;
        printf("%4d", x);
        sum += x;
    }
    printf("\n Suma = %d \n Sered znach = %.2f", sum, sum / float(n));
    printf("\nCreate by Yevhenii Sirenko");
    getch();
}