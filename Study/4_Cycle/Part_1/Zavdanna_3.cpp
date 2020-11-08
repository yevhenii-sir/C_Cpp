#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define HIGH 100
#define LOW 1

int main ()
{
    int x, n = 1, rn, s;
    printf("Спробуй відгадати число в діапазоні від %d до %d!\n", HIGH, LOW);
    rn = HIGH - LOW;
    x = rand()%rn + LOW;
    printf("Введіть перше число яке вам спало на думку: ");
    scanf("%d", &s);
    while (s != x)
    {
      n++;
      printf("Ви не вгадали, спробуйте ще раз!\n");
      if (x < s) {
          printf("*підсказка - це число менше %d!\n", s);
      }
      else printf("*підсказка - це число більше %d!\n", s);
      printf("    Введіть чисто - ");
      scanf("%d", &s);
    }
    printf("Ви угадали за %d спроби!!! \n", n);
    printf("\nCreate by Yevhenii Sirenko");
    getch();
}
