#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

int main() 
{
    char s1[80], s2[80];
    puts("Vvedit stroku: ");
    gets(s1);
    strcpy(s2, s1);
    strupr(s1);
    strupr(strrev(s2));
    puts(s1);
    puts(s2);
    int i = 0;
    while (s1[i] != '\0') {
        if (s1[i] != s2[i]) {
            puts("Це не поліндром!");
            getch();
            exit(1);
        }
        i++;
    }
    puts("Це поліндром!");
    // if (strupr(s) == strupr(strrev(s)))
    // {
    //     puts("Це поліндром!");
    // }
    // else puts("Це не поліндром!");
    getch();
}