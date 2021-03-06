#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>

float atof(char s[])
{
    float val, power;
    int i, sing;
    for (i = 0; isspace(s[i]); i++);
    sing = (s[i] == '-')? -1:1;
    if (s[i] == '+' || s[i] == '-') i++;
    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.') i++;
    for (power = 1.0; isdigit(s[i]); i++)
    {
        val = 10.0 * val + (s[i] - '0');
        power *= 10;
    }
    return sing * val / power;
}

int main()
{
    char str[25];
    float x;
    printf("Create by Yevhenii Sirenko\n\n");
    printf("Input str: ");
    scanf("%s", str);
    printf("Float = %.4f", atof(str));
    getch();
}
