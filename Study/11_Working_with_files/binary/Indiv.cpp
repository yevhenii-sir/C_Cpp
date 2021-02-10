#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#define maxlenght 90
 
int main()
{
    FILE *in, *out;
    static char name[25], s[maxlenght], m[maxlenght];
    char *p;
    printf("Vvedit imya failu: ");
    gets(name);
    if ((in = fopen(name, "r")) == NULL) {
        printf("File %s is absent!!! \n", name);
        return 0;
    }
    printf("Vvedit imya failu dlya zberezhenya: ");
    gets(name);
	out = fopen(name, "w");
    while (!feof(in)) {
        fgets(s, maxlenght, in);
        p = strstr(s, "//"); //визначається входження символів "//" в строку
        if (p != NULL) {
            strncpy(m, s, (p-s)); //(p-s) - довжина строки до входження символів "//"
            fprintf(out, "%s\n", m); //Вивод зміненої строки
        } else {
        	fprintf(out, "%s", s);//Вивод в тому випадку якщо не найдено символів "//"
		}
    }
    fclose(in);
    fclose(out);
    return 0;
}