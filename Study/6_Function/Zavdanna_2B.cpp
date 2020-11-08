#include <stdio.h>
#include <conio.h>
#include <math.h>

Fact(int n)
{
    int i, dob = 1;
    for (i = 1; i <= n; i++) dob *= i;
    return dob;
}

main ()
{
    int x;
    printf("Create by Yevhenii Sirenko");
    printf("\nVvedi chislo x: ");
    scanf("%d", &x);
    printf("\n%d! = %d", x, Fact(x));
    getch();
}