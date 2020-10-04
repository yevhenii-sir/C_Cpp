#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    int a, sum;
    printf("Vvedi chislo: ");
    scanf("%d", &a);
    printf("Suma cifer = %d", ((a % 10) + ((a / 10) % 100)));
    getch();
    return 0;
}