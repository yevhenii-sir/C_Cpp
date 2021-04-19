#include <stdio.h>
#include <conio.h>

int main()
{
    char name[20], l_name[20];
    printf("Input name and surname: ");
    scanf("%s%s", name, l_name);
    printf("Output:\n");
    printf("      %s\n", name);
    printf("        %s\n", l_name);
    return 0;
}
