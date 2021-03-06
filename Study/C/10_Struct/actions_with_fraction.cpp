#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


struct fraction 
    {
        int numerator;
        int denumerator;
    };

void input_fraction(fraction &x)
{
    system("CLS");
    printf("Введіть чисельник і знаменник: ");
    scanf("%d%d", &x.numerator, &x.denumerator);
    while (x.denumerator == 0) {
        printf("Знаменник не може дорівнювати нулю!\nВведіть його ще раз: ");
        scanf("%d", &x.denumerator);
    }
}

void output_fraction(fraction x)
{
    printf("Дріб:\n\n %d\n ", x.numerator);
    int length_numerator = (int)(x.numerator ? log10(x.numerator) + 1 : 1);
    int length_denumerator = (int)(x.denumerator ? log10(x.denumerator) + 1 : 1);
    length_numerator = ((length_numerator < length_denumerator) ? length_denumerator : length_numerator);
    for (int i = 1; i < length_numerator + 1; i++) printf("-");
    printf("\n %d \n", x.denumerator);
}

void warp_fraction(fraction &x)
{
    int temp;
    temp = x.numerator;
    x.numerator = x.denumerator;
    x.denumerator = temp;
    while (x.denumerator == 0) {
        printf("Знаменник після обміну дорівнює нулю.\n Введіть значення: ");
        scanf("%d", &x.denumerator);
    }
    printf("Готово!");
    getch();
}

int reduce(int x, int y)
{
    return ((y == 0) ? x : reduce(y, (x % y)));
}


float decimal_equivalent(fraction &x)
{
    return (float)x.numerator / x.denumerator;
}

int main() 
{
    fraction fraction_struc;
    int common_divisor;
    int menu_number;
    do {
        system("CLS");
        printf("Create by Yevhenii Sirenko\n\n");
        printf("Виберіть:\n 1 - Ввести зачення\n 2 - Вивести значення\n 3 - Обернути дріб\n");
        printf(" 4 - Скоротити дріб\n 5 - Визначити десятковий еквівалент\n 0 - Вихід\n");
        printf("Введіть номер: ");
        scanf("%d", &menu_number);
        switch (menu_number)
        {
        case 1:{
            input_fraction(fraction_struc);
            break;
        }
        case 2:{
            system("CLS");
            output_fraction(fraction_struc);
            getch();
            break;
        }
        case 3:{
            warp_fraction(fraction_struc);
            break;
        }
        case 4:{
            common_divisor = reduce(fraction_struc.numerator, fraction_struc.denumerator);
            printf("Спільний дільник: %d\n", common_divisor);
            fraction_struc.numerator /= common_divisor;
            fraction_struc.denumerator /= common_divisor;
            output_fraction(fraction_struc);
            getch();
            break;
        }
        case 5:{
            system("CLS");
            output_fraction(fraction_struc);
            printf("\nДесятковий еквівалент: %.4f", decimal_equivalent(fraction_struc));
            getch();
            break;
        }
        case 0: return 0;
        default:
            printf("Ви ввели не правильно!");
            getch();
            system("CLS");
        }
    } while (1);
}

