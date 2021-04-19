#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n, max, min, c;
    printf("Vvedit chislo: ");
    scanf("%d", &n);
    max = n % 10;
    min = n % 10;
    do {
        c = n % 10;
        if (c > max)
            max = c;
        if (c < min)
            min = c;
        n /= 10;
    } while (n != 0);
    printf("max = %d; min = %d;", max, min);
    printf("\nCreate by Yevhenii Sirenko");
    getch();
    return 0;
}