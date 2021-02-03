#include <stdio.h>
#include <conio.h>
#include <string.h>
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
    printf("\nНазва продукту - ");
    scanf("%s",t[i].nazva);
    printf("Ціна - ");
    scanf("%d", &t[i++].cena);
    printf(" Повторити? y/n \n");
    } while (getch()!='n');
    return i;
}
void vivod(int n)
{
    printf("\nСписок товарів: \n");
    printf("       Назва            Ціна\n");
    for(int i=0; i<n; i++)
    printf(" %20s %5d\n", t[i].nazva, t[i].cena);
}

void poshuk(int n)
{
    int x,k=0; char oznaka[20];
    puts("Введи ознаку товару для пошуку:");
    scanf("%s",oznaka);
    x = atoi(oznaka);
    for(int i=0; i<n; i++)
    if (strcmp(oznaka, t[i].nazva) == 0 || t[i].cena==x)
    {
        k++;
        printf("%3d %20s %5d\n", k, t[i].nazva, t[i].cena);
    }
    if(k == 0) printf("Не знайдено!\n");
    else printf("Всього %d товарів \n", k);
}

void delete_prod(int &n)
{
    int x,k=0; char oznaka[20];
    puts("Введи ознаку товару для видалення:");
    scanf("%s",oznaka);
    x = atoi(oznaka);
    for(int i=0; i<n; i++)
    if (strcmp(oznaka, t[i].nazva) == 0 || t[i].cena==x)
    {
        k++;
        printf("%3d %20s %5d\n", k, t[i].nazva, t[i].cena);
    }
    if(k == 0) printf("Не знайдено!\n");
    else printf("Видалити %d товарів? y/n \n", k);
    if (getch()!= 'n') {
    for(int i = 0; i<n; i++)
    if (strcmp(oznaka, t[i].nazva) == 0 || t[i].cena==x)
    {
        for (int j = i; j < n-1; j++) {
            strcpy(t[j].nazva,t[j+1].nazva);
            t[j].cena = t[j+1].cena;
        }
        n--;
    }
    printf("Видалено!\n\n");
    }
}

void sort(int n) 
{
    tovar temp;
    for(int i = 1; i < n; i++)
        for(int j = n-1; j >= i; j--)
            if(strcmp(t[j-1].nazva,t[j].nazva) > 0)
            {
                temp = t[j-1]; t[j-1] = t[j]; t[j] = temp; 
            }
}

main()
{
    static int kil;
    char ch_menu[1];
    short int int_menu;
    do {
        system("CLS");
        printf("Create by Yevhenii Sirenko\n");
        printf("\nМеню:\n 1 - Додати запис\n 2 - Продивитись записи\n 3 - Сортувати\n");
        printf(" 4 - Видалити запис\n 5 - Найти запис\n 6 - Вихід\nВведіть номер: ");
        scanf("%s", ch_menu);
        int_menu = atoi(ch_menu);
        switch (int_menu)
        {
        case 1:{
            system("CLS");
            kil = vvod(kil);
            break;
        }
        case 2:{
            system("CLS");
            vivod(kil);
            getch();
            break;
        }
        case 3:{
            sort(kil);
            printf("Відсортовано!\n");
            getch();
            break;
        }
        case 4:{
            system("CLS");
            delete_prod(kil);
            getch();
            break;
        }
        case 5:{
            system("CLS");
            poshuk(kil);
            getch();
            break;
        }
        case 6: return 0;
        default:
            printf("Ви неправильно ввели!!!");
            getch();
            break;
        }
    } while(1);
}