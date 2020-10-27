#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float p, s;
    printf("Vvedi 3 storoni: ");
    scanf("%d%d%d", &a, &b, &c);
    p = (a + b + c) / 3;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("\n S = %.5f P = %.2f", s, p * 2);
    getch();
    return 0;
}