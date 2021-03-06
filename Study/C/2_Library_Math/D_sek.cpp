#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    long h, min, sek;
    printf("Введіть секунди: ");
    scanf("%ld", &sek);  
    h = (sek % 86400) / 3600;
    min = ((sek % 86480) % 3600) / 60;
    sek = ((sek % 86480) % 3600) % 60;
    printf("\n Годин = %ld; \n Хвилин = %ld; \n Секунд = %ld;\n", h, min, sek);
    printf("\nCreate By Yevhenii Sirenko\n");
    getch();
    return 0;
}