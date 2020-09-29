#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, sum;
    printf("Введите числа А и В: ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("Результат %d + %d = %d\n", a, b, sum);
    return 0;
}
