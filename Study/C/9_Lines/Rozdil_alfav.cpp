#include <iostream>
#include <string.h>
#include <stdio.h>

char *slov[10];
int words(char *s)
{
    char *razd = " ,:!", *p;
    int i = 0;
    p = strtok(s, razd);
    while (p)
    {
        slov[i++] = p;
        p = strtok(NULL, razd);
    }
    return i;
}

void swop(char *a, char *b)
{
    static char temp [10];
    strcpy(temp, a); strcpy(a, b); strcpy(b, temp);
}

void sort(int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        for (j = n - 1; j >= i; j--)
            if (strcmp(slov[j - 1], slov[j]) > 0)
                swop(slov[j - 1], slov[j]);
    }
}

int main() 
{
    char radok[50]; int kil = 0;
    puts("Create by Yevhenii Sirenko");
    puts("Vvedi radok sliv: ");
    gets(radok);
    kil = words(radok);
    printf("\n Vsedo slow %d \n", kil);
    sort(kil);
    for (int i = 0; i < kil; i++)
        puts(slov[i]);
    return 0;
}