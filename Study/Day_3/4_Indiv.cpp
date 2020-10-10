#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int d;
    printf("Введіть номер дня тижня: ");
    scanf("%d", &d);

    if ((d > 0)&&(d <= 5))
        printf("\n\tРобочий день!");
    else if ((d >= 6)&&(d <= 7))
            printf("\n\tВихідний день!");
        else printf("Ви ввели не правильно!");
    printf("\n\nCreate by Yevhenii Sirenko");
    getch();
    return 0;
}