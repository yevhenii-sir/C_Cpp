#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Введи значення a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);
    if ((a > 0)&&(b > 0)&&(c > 0))
        if ((a == b)&&(b == c))
            printf("Рівносторонній трикутник!");
        else if (((a == b)&&(b != c))||((a == c)&&(c != b)))
                printf("Рівнобедрений трикутник!");
            else printf("Різносторонній трикутник!");
    else printf("Введено не вірні дані!");
    printf("\n\nCreate by Yevhenii Sirenko");
    getch();
    return 0;
}