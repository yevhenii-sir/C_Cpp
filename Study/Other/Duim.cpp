#include <stdio.h>
#include <conio.h>
const double D = 2.54;
#define DEZL "C++ — это круто!"

int main()
{
    char name[15]; int duim;
    double cm;
    printf("%s\n",DEZL);
    printf("Как тебя звать? - ");
    scanf("%s", name);
    printf("Привет, %s\n", name);
    printf("Bведи длину в дюймах - ");
    scanf("%d",&duim);
    cm = D * duim;
    printf("%d дюймов = %.2lf cм", duim, cm);
    getch();
    return 0;
}
