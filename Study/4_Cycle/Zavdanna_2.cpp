#include <stdio.h>
#include <conio.h>
#define HIGH 100
#define LOW 1

int main()
{
    int n = 1, ch = HIGH, cl = LOW, chislo = (HIGH + LOW) / 2;
    char c;
    printf("Задумай число від %d до %d, а я спробую угадати його\n\n", cl, ch);
    printf("Cкажи якщо угадала, ");
    printf("b - якщо більше, m - менше\n");
    printf("    Ітак, ваше чмсло %d?\n", chislo);
    while ((c = getchar()) != 'y')
    {
        if (c != '\n');
        {
            if (c == 'm')
            {
                ++n;
                ch = chislo - 1;
                chislo = (ch + cl) / 2;
                printf("Многовато буде. Може %d?\n", chislo);
            }
            else
             if (c == 'b')
             {
                ++n;
                cl = chislo + 1;
                chislo = (ch + cl) / 2;
                printf("Маловато буде, може це %d?\n", chislo);
             }
             else printf("Підкажи, більше b чи менше m?\n");
        }
    }
    printf("Я угадала за %d спроб!! \n", n);
    printf("\nCreate by Yevhenii Sirenko");
    getch();
}
