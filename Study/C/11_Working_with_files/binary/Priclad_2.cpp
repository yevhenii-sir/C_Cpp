#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>

struct book
{
    char title[20];
    char avtor[20];
    int price;
};

book libry[100];
FILE *in, *out;

//------------------- пошук книги за ознакою ----------------

int poisk(int n)
{
    int count=0,k;
    char b[20];
    printf("Vvedi avtora ili nazvy: ");
    gets(b);
    for(k=0; k<n; k++)
        if (strcmp(libry[k].title,b) == 0 || strcmp(libry[k].avtor,b) == 0)
        {
            fprintf(out,"%d%20s%20s%12d\n",count+1,libry[k].title,libry[k].avtor,libry[k].price);
            count++;
        }
    return count;
}

main()
{
    int i=0,kil;
    char ch;
    char inname[10];
    printf("Vvedi ima faila: ");
    gets(inname);
    if((in = fopen(inname,"r"))!=NULL) {
        while(!feof(in)) {
            fscanf(in,"%s%s%d",libry[i].title,libry[i].avtor,&libry[i].price);
            printf("\n%s %s %d",libry[i].title,libry[i].avtor,libry[i].price);
            i++;
        }
        printf("\n\nVsego naideno %d knig\n",i);
        out = fopen("res.txt","w");
        fputs("Результати пошуку: \n",out);
        kil = poisk(i);
        fprintf(out,"\nVsego znaideno %d knig\n",kil);
        fclose(in); fclose(out);
    }
    else
    printf("File %s is absent!!! \n", inname);
    return 0;
}