#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define maxline 80

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

void write_to_file(int n)
{
    char name[40];
    printf("Введіть імя файлу для запису інформації: ");
    scanf("%s", name);
    FILE *out = fopen(name, "w");
    for (int i = 0; i < n; i++) {
        fprintf(out, "%s\n", t[i].nazva);
        fprintf(out, "%d\n", t[i].cena);
    }
    fclose(out);
    printf("\n Запис завершено!");
    getch();
}

void read_from_file(int &n)
{
     char name[40];
    printf("Введіть імя файлу для зчитування інформації: ");
    scanf("%s", name);
    FILE *in = fopen(name, "r");
    char str[maxline];
	if (in != NULL)
	{
        int i = 0;
        while(!feof (in)) {
            if (fgets(str, 126, in)) {
                int pos = strlen(str)- 1;
                if (str[pos] == '\n') {
                    str[pos] = '\0';
                }
                strcpy(t[i].nazva, str);
            }
            if (fgets(str, 126, in)) {
                t[i].cena = atoi(str);
            }
        i++;
        }
        n = i-1;
        printf("Зчитування завершено!");
    }
    else printf("Не Найдено");
    
    getch();
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
        printf(" 4 - Видалити запис\n 5 - Найти запис\n 6 - Записати в файл\n"); 
        printf(" 7 - Зчитати з файлу\n 8 - Вихід\nВведіть номер: ");
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
        case 6: {
            write_to_file(kil);
            break;
        }
        case 7: {
            read_from_file(kil);
            break;
        }
        case 8: return 0;
        default:
            printf("Ви неправильно ввели!!!");
            getch();
            break;
        }
    } while(1);
}