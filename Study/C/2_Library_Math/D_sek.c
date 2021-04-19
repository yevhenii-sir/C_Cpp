#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    long h, min, sek;
    printf("Input second: ");
    scanf("%ld", &sek);  
    h = (sek % 86400) / 3600;
    min = ((sek % 86480) % 3600) / 60;
    sek = ((sek % 86480) % 3600) % 60;
    printf("\n Hours = %ld; \n Minutes = %ld; \n Seconds = %ld;\n", h, min, sek);
    printf("\nCreate By Yevhenii Sirenko\n");
    getch();
    return 0;
}