#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Input value a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);
    if ((a > 0)&&(b > 0)&&(c > 0))
        if ((a == b)&&(b == c))
            printf("Equilateral triangle!");
        else if (((a == b)&&(b != c))||((a == c)&&(c != b)))
                printf("Isosceles triangle!");
            else printf("Versatile triangle!");
    else printf("Invalid data entered!");
    printf("\n\nCreate by Yevhenii Sirenko");
    getch();
    return 0;
}