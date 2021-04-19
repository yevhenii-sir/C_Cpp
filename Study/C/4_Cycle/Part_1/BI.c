#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int k, n, m, c;
    printf("Vvedit chislo: ");
    scanf("%d", &n);
    printf("Vvedit cifru: ");
    scanf("%d", &m);
    k = 0;
    do {
        c = n % 10;
        if (c == m) {
            k++;
        }
        n /= 10;
    } while (n != 0);
    if (k > 0) 
        printf("Zustrichaetsa!");
    else
        printf("Ne zustrichaetsa!");
    printf("\nCreate by Yevhenii Sirenko");
    getch();
    return 0;
}