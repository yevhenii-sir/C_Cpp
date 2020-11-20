#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void Vivod(int x, int y)
{
    printf("Дріб: \n\t %d\n\t----\n\t %d", x, y);
    getch();
}

void obern(int &x, int &y)
{
    int temp;
    temp = x; x = y; y = temp;
    printf("Виконано!\n");
    Vivod(x, y);
}

void scoroch(int &x, int &y)
{
    int nod;
    for (int i = x; i > 0; i--) {
        if (x % i == 0 && y % i == 0) {
            nod = i;
            break;
        }
    }
    if (nod == 1) {
        printf("Спільний дільник = 1 (Дріб не скротився)");
        getch();
    }
    else{
    x /= nod; y /= nod;
    Vivod(x, y);
    }
}

int main ()
{
    int a, b, m;
    printf("Введіть a, b (b > 0): ");
    scanf("%d%d", &a, &b);
    do {
    system("cls");
    printf("Create by Yevhenii Sirenko\n");
    printf("Меню:\n 1 - Виведення\n 2 - Обернення\n 3 - Скорочення\n 0 - Вихід\nВведіть номер: ");
    scanf("%d", &m);
    switch (m)
    {
    case 1:
        Vivod(a, b);
        break;
    case 2:
        obern(a, b);
        break;
    case 3:
        scoroch(a, b);
        break;
    case 0:
        exit(0);
    }
    } while (1);
}