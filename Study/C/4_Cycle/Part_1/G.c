#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n, m, c;
    printf("Vvedit chislo: ");
    scanf("%d", &n);
    m = n % 10;
    do {
        c = n % 10;
        if (c > m) {
            m = c;
        }
        n /= 10;
    } while (n != 0);
    printf("starsha cifra - %d", m);
    printf("\nCreate by Yevhenii Sirenko");
    getch();
    return 0;
}