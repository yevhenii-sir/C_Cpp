#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int r;
    printf("Введіть ваш вік: ");
    scanf("%d", &r);
    if ((0 < r)&&(r < 150)) 
    {
        if ((r % 10) == 1) 
        {
            printf("Вам %d рік", r);
        }
        else if (((r % 10) >= 1)&&((r % 10) <= 4)) 
        {
            printf("Вам %d роки", r);
        }
        else printf("Вам %d років", r);
    }
    else printf("Введено не вірні дані!");
    printf("\n\nCreate by Yevhenii Sirenko");
    getch();
    return 0;
}