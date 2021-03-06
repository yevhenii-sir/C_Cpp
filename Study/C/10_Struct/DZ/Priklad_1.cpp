#include <stdio.h>
#include <conio.h>
#include<string.h>
#include <stdlib.h>

struct tovar
{
    char nazva[20];
    int cena;
};

tovar t[10];

int vvod(int i)
{
    do {
    printf("\n Nazva - ");
    scanf("%s",t[i].nazva);
    printf(" Cena - ");
    scanf("%d", &t[i++].cena);
    printf(" Repeat? y/n ");
    } while (getch()!='n');
    return i;
}
void vivod(int n)
{
    printf("\n Spisok tovarov : \n");
    for(int i=0; i<n; i++)
    printf(" %20s %5d\n", t[i].nazva, t[i].cena);
}

void poshuk(int n)
{
    int x,k=0; char oznaka[20];
    puts("Vvedi oznaky ");
    scanf("%s",oznaka);
    x=atoi(oznaka);
    for(int i=0; i<n; i++)
        if (strcmp(oznaka, t[i].nazva)==0 || t[i].cena==x)
        {
            k++;
            printf("%3d %20s %5d\n", k, t[i].nazva, t[i].cena);
        }
    if(k==0) printf(" Ne znaideno! ");
    else printf(" Vsogo %d tovariv \n", k);
    }

void sort(int n) 
{
    tovar temp;
    for(int i=1; i<n; i++)
        for(int j=n-1; j>=i; j--)
            if(strcmp(t[j-1].nazva,t[j].nazva)>0)
            { 
                temp=t[j-1]; t[j-1]=t[j]; t[j]=temp; 
            }
}
main()
{
    int kil=0;
    kil=vvod(kil);
    printf("Create by Yevhenii Sirenko");
    vivod(kil);
    poshuk(kil);
    sort(kil);
    puts("\nSort!!!");
    vivod(kil);
    system("pause");
 } 