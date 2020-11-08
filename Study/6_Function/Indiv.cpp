#include <stdio.h>
#include <conio.h>
#include <math.h>

float a, b, c;

float F(float x)
{
    return ((a*pow(x, 2) + b) / (x - c));
}

int main()
{
    float x1, x2, d, max, Fx;
    printf("Create by Yevhenii Sirenko\n\n");
    printf("Введіть a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);
    printf("Введіть x1, x2, d: ");
    scanf("%f%f%f", &x1, &x2, &d);
    max = F(x1);
    while (x2 >= x1)
    {
        Fx = F(x1);
        printf("F(%.2f) = (%.2f * %.2f^2 + %.2f)/(%.2f - %.2f) = %.2f\n",x1, a, x1, b, x1, c,Fx);
        if (max < Fx) max = Fx;
        x1 += d;
    }
    printf("\nМаксимальне = %.2f", max);
    getch();
    return 0;
}
