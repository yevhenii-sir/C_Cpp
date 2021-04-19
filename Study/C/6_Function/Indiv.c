#include <stdio.h>
#include <conio.h>
#include <math.h>

double a, b, c;

double F(double x)
{
    return ((a*pow(x, 2) + b) / (x - c));
}

int main()
{
    double x1, x2, d, max, Fx;
    printf("Create by Yevhenii Sirenko\n\n");
    printf("Введіть a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);
    printf("Введіть x1, x2, d: ");
    scanf("%lf%lf%lf", &x1, &x2, &d);
    max = F(x1);
    while (x2 >= x1)
    {
        Fx = F(x1);
        printf("F(%.2lf) = (%.2lf * %.2lf^2 + %.2lf)/(%.2lf - %.2lf) = %.2lf\n",x1, a, x1, b, x1, c,Fx);
        if (max < Fx) max = Fx;
        x1 += d;
    }
    printf("\nМаксимальне = %.2lf", max);
    getch();
    return 0;
}
