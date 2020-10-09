#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Введи значення a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);
    float x1, x2, D = (pow(b, 2) - 4 * a * c);
    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / 2 * a;
        x2 = (-b - sqrt(D)) / 2 * a;
    }
    else if (D == 0)
    {
        x1 = x2 = -b / (2 * a);
    }
    else {
        printf("Немає коренів рівняння!\n\nCreate by Yevhenii Sirenko");
        getch();
        exit(0);
    }
    printf("\tx1 = %.2f;\n\tx2 = %.2f;\n\tD = %.2f\n\nCreate by Yevhenii Sirenko", x1, x2 ,D);
    getch();
    return 0;
}