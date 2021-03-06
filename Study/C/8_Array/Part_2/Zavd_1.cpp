#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "../../Array_Func.cpp"

int main(void)
{
    int n = 0, Mas[100], i, k;
    float ser;
    printf("Create by Yevhenii Sirenko\n");
    do {
    printf("Введіть кількість елементів (0 < n < 100): ");
    scanf("%d", &n);
    } while (!((n > 0)&&(n <= 100)));
    for (i = 0; i < n; i++)
        Mas[i] = 30 - rand()%50;
    k = 0;
    ser = 0;
    for (i = 0; i < n; i++)
        if (Mas[i] < 0) {
            ser += Mas[i];
            k++;
        }
    if (k != 0) ser /= k;
    Vivod(Mas, n);
    printf("Середнє значення = %5.2f, кількість відємних = %d", ser, k);
    getch();
    return 0;
}