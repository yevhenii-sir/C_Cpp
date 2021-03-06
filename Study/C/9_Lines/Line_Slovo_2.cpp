#include <iostream>
#include <string.h>
#include <stdio.h>

int main()
{
    puts("Create by Yevhenii Sirenko");
    static char s[] = "Parohod", t[] = "Fontan", ptr[10];
    printf("Skladeno z sliv %s + %s\n", s, t);
    strncpy(ptr, s, 3);
    strncat(ptr, t + 3, 2);
    puts(ptr);
    return 0;
}