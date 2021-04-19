#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a, b, c;
    double p, s;
    printf("Vvedi 3 storoni: ");
    scanf("%d%d%d", &a, &b, &c);
    p = (a + b + c) / 3.0;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("\n S = %.5lf P = %.2lf", s, p * 2);
    getch();
    return 0;
}
