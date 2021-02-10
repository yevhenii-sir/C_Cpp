#include<stdio.h>
#include<conio.h>

main()
{
    FILE *in,*out;
    int i=0,j,k=0,n=0;
    long len;
    char s[60] ;
    in = fopen("Sirenko","r");
    if (!in) {
        puts("Помилка вiдкриття файла"); 
        return 0; 
    }
    fseek(in,0,2);
    len = ftell(in);
    printf("Розмiр файла = %ld байт\n",len);
    fseek(in,0,0);
    out=fopen("Sirenko.rez","w");
    while((s[i] = getc(in))!=EOF)
    {
        if (s[i] == '?') {
            for (j = n; j <= i; j++) putc(s[j],out);
            n=i+1;
            k++;
        }
        if (s[i] == '.' || s[i] == '!' ) n = i + 1;
        i++ ;
    }
    fclose(in); fclose(out);
}