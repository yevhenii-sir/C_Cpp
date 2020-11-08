#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n;
    char name[20], last_n[20];
    do {
        system("cls");
        printf("Create by Yevhenii Sirenko\n");
        printf("Меню: \n\t1 - Ввести ім'я\n\t2 - Вивести ім'я\n\t3 - Ввести фамилію\n\t4 - Вивести фамилію\n\t5 - Вивести все \n\t0 - Вихід\nВведіть цифру: ");
        scanf("%d", &n);
        switch (n) {
            case 1: system("cls");
                    printf("Введіть імя: ");
                    scanf("%s", name);
                    break;
            case 2: system("cls");
                    printf("Імя - %s", name);
                    getch();
                    break;
            case 3: system("cls");
                    printf("Введіть фамилію: ");
                    scanf("%s", last_n);
                    break;
            case 4: system("cls");
                    printf("Фамилія - %s", last_n);
                    getch();
                    break;
            case 5: system("cls");
                    printf("Імя і фамилія - %s %s", name, last_n);
                    getch();
                    break;
        }
    } while (n != 0);
    getch();
    return 0;
}