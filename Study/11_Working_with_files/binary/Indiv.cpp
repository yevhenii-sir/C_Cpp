#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#define maxlenght 90
//код покищо не дописаний
int main()
{
    FILE *in, *out;
    char name[25], s[maxlenght], m[maxlenght];
    char *p;
    printf("Vvedit imya failu: ");
    gets(name);
    if ((in = fopen(name, "r+")) == NULL) {
        printf("File %s is absent!!! \n", name);
        return 0;
    }
    printf("Vvedit imya failu dlya zberezhenya: ");
    gets(name);
    out = fopen(name, "w");
    while (!feof(in)) {
        fgets(s, maxlenght, in);
        p = strstr(s, "//");
        if (p != NULL) {
        //printf("%d\n", p-s+1);
        strcpy(m, s+(p-s));
        fprintf(out, "%s", m);
        }
    }
    return 0;
}