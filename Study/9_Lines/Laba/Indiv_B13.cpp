#include <iostream>
#include <string.h>
#include <stdio.h>
#include <conio.h>

void delete_symbol(char *line, int *num)
{
    int len = strlen(line);
    for (int i = *num; i < len-1; i++)
    {
        line[i] = line[i + 1];
    }
    line[len - 1] = '\0';
}

void del_rep_symb(char *line)
{
    static char temp;
    int j, i = 0;
    while (line[i] != '\0')
    {
        temp = line[i];
        j = i + 1;
        while (line[j] != 0)
        {
            if ((temp == line[j])&&(temp != ' ')) {
                delete_symbol(line, &j);
            }
            j++;
        }
        i++;
    }
}

int main()
{
    static char line_symbols[80]; 
    puts("Create by Yevhenii Sirenko\n");
    printf("Vvedit ryadok: ");
    gets(line_symbols);
    del_rep_symb(line_symbols);
    printf("Result: \n\t %s", line_symbols);
    getch();
    return 0;
}