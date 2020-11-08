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

void parn(int a)
{
    if (a % 2 == 0) printf("\nЧисло %d - парне\n", a);
    else printf("\nЧисло %d - непране\n", a);
}

float chaska(int a, int b)
{
    if ((b != 0)) return (a / b); else return 0;
}

int main()
{
    int x1, x2, nsd, oz;
    float chast;
    printf("\nВведи два числа: ");
    scanf("%d%d", &x1, &x2);
    do
    {
        printf("Create by Yevhenii Sirenko\n");
        printf("\nОберіть правильне: \n1 - НСД\n2 - Максимум\n3 - Серед. арефм.\n4 - Частка чисел\n5 - Парність числа(x1)\n6 - Вихід\n");
        printf("Введіть номер пункту: ");
        scanf("%d", &oz);
        switch (oz)
        {
        case 1: nsd = NSD(x1, x2);
            printf("\nНСД чисел - %d i %d = %d\n", x1, x2, nsd);
            break;
        case 2: printf("Максимальне число з %d i %d = %d\n", x1, x2, fmax(x1, x2));
            break;
        case 3: printf("\n Середнє арефметичне - %d i %d = %.2f\n", x1, x2, fser(x1, x2));
            break;
        case 4: 
            chast = chaska(x1, x2);
            if (chast != 0)
            printf("\nЧастка чисел %d i %d = %.2f\n", x1, x2, chast);
            else printf("На нуль ділити не можна!!!\n");
            break;
        case 5: parn(x1);
            break;
        case 6: exit(0);
        default: printf("\n Не правильна операція!");
        }
    } while (1);
}