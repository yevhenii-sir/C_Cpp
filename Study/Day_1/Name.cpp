#include <stdio.h>
#include <conio.h>

int main()
{
    char name[20], l_name[20];
    printf("Введите имя и фамилию: ");
    scanf("%s%s", name, l_name);
    printf("Вывод:\n");
    printf("      %s\n", name);
    printf("        %s\n", l_name);
    return 0;
}