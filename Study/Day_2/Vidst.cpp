#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int x1, x2, y1, y2;
    float len;
    printf("Vvedit x1 y1: ");
    scanf("%d%d", &x1, &y1);
    printf("Vvedit x2 y2: ");
    scanf("%d%d", &x2, &y2);
    len = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    printf("\n Vidstan = %.2f", len);
    getch();
    return 0;
}