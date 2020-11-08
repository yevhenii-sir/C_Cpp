#include <stdio.h>
#include <conio.h>
#include <math.h>

int NSD (int a, int b)
{
    while (a != b)
    if (a > b) a -= b; else b -= a;
    return a;
}

int fmax(int a, int b)
{
    return (a > b) ? a:b;
}

float fser(int a, int b)
{
    return (a + b) / 2.0;
}

int main()
{
    int x1, x2, nsd, oz;
    printf("\nVvedi 2 chisla: ");
    scanf("%d%d", &x1, &x2);
    do
    {
        printf("Create by Yevhenii Sirenko");
        printf("\n    Oberi pravilne: \n1- NSD\n2 - max\n3 - seredne\n5 - exit\n");
        printf("Vvedit cifru: ");
        scanf("%d", &oz);
        switch (oz)
        {
        case 1: nsd = NSD(x1, x2);
            printf("\nNSD chisel %d i %d = %d ", x1, x2, nsd);
            break;
        case 2: printf("Max chisel %d i %d = %d", x1, x2, fmax(x1, x2));
            break;
        case 3: printf("\n SERedne chisel %d i %d = %.2f", x1, x2, fser(x1, x2));
            break;
        case 5: exit(0);
        default: printf ("\n Ne pravilna operatsia!");
        }
    } while (1);
}