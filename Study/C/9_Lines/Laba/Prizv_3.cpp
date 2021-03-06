#include <iostream>
#include <string.h>
#include <stdio.h>

int main()
{
    static char one[] = "Siriy", two[] = "Acitelen", three[] = "Moloko", ptr[10];
    printf("\nSkladeno z sliv %s + %s + %s\n", one, two, three);
    strncpy(ptr, one, 3);
    strncat(ptr, two + 6, 2);
    strncat(ptr, three + 4, 2);
    puts(ptr);
    return 0;
}