#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int r;
    printf("Enter your age: ");
    scanf("%d", &r);
    if ((0 < r)&&(r < 110)) 
    {
        if ((r % 10) == 1) 
        {
            printf("Вам %d рік", r);
        }
        else if (((r % 10) > 1)&&((r % 10) <= 4)) 
        {
            printf("Вам %d роки", r);
        }
        else printf("Вам %d років", r);
    }
    else printf("Incorrect data entered!");
    printf("\n\nCreate by Yevhenii Sirenko");
    getch();
    return 0;
}