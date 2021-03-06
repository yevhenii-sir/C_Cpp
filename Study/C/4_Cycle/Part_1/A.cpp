#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int k, n, c;
    printf("Vvedit chislo: ");
    scanf("%d", &n);
    k = 0;
    do {
        n /= 10;
        k++;
    } while (n != 0);
    printf("U chisli %d cifer!\n", k);
    printf("Create by Yevhenii Sirenko");
    getch();
    return 0;
}