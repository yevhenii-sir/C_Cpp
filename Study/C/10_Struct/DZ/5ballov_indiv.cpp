#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct Date_stud
{
    int day, month, year;
};

struct Name_stud
{
    char first_name[20], surname[20], patronymic[20];
};


struct info_stud
{
    Name_stud name;
    Date_stud date_of_birth;
};

info_stud student[21];

int vvod(int i)
{
    do {
    printf("\nІмя Фамилія ПоБатькові студента - ");
    scanf("%s%s%s", student[i].name.first_name, student[i].name.surname, student[i].name.patronymic);
    do {
    printf("Дата народження (dd mm yyyy) - ");
    scanf("%d%d%d", &student[i].date_of_birth.day,  &student[i].date_of_birth.month,  &student[i].date_of_birth.year);
    } while (!(student[i].date_of_birth.day <= 31) && !(student[i].date_of_birth.month <= 12) && !(student[i].date_of_birth.year <= 2022));
    printf(" Повторити? y/n \n");
    i++;
    } while (getch()!='n');
    return i;
}
void vivod(int n)
{
    printf("\nСтуденти: \n");
    printf("                     ПІБ                           Дата Народження\n");
    for(int i=0; i<n; i++)
    printf("%12s%12s%20s%10d.%d.%d\n", student[i].name.surname, student[i].name.first_name, student[i].name.patronymic, student[i].date_of_birth.day, student[i].date_of_birth.month, student[i].date_of_birth.year);
}

void poshuk(int n)
{
    int x,k = 0; char oznaka[20];
    puts("Введи ознаку студента для пошуку:");
    scanf("%s",oznaka);
    x = atoi(oznaka);
    for(int i=0; i<n; i++)
    if ((strcmp(oznaka, student[i].name.first_name) == 0) || (strcmp(oznaka, student[i].name.surname) == 0) || (strcmp(oznaka, student[i].name.patronymic) == 0) || (student[i].date_of_birth.day == x) || (student[i].date_of_birth.month == x) || (student[i].date_of_birth.year == x))
    {
        k++;
        printf("%3d%12s%12s%20s%10d.%d.%d\n", k, student[i].name.surname, student[i].name.first_name, student[i].name.patronymic, student[i].date_of_birth.day, student[i].date_of_birth.month, student[i].date_of_birth.year);
    }
    if(k == 0) printf("Не знайдено!\n");
    else printf("Найдено %d записів\n", k);
}

void delete_prod(int &n)
{
    int x,k=0; char oznaka[20];
    puts("Введи ознаку студента для пошуку:");
    scanf("%s",oznaka);
    x = atoi(oznaka);
    for(int i=0; i<n; i++)
    if ((strcmp(oznaka, student[i].name.first_name) == 0) || (strcmp(oznaka, student[i].name.surname) == 0) || (strcmp(oznaka, student[i].name.patronymic) == 0) || (student[i].date_of_birth.day == x) || (student[i].date_of_birth.month == x) || (student[i].date_of_birth.year == x))
    {
        k++;
        printf("%3d%12s%12s%20s%10d.%d.%d\n", k, student[i].name.surname, student[i].name.first_name, student[i].name.patronymic, student[i].date_of_birth.day, student[i].date_of_birth.month, student[i].date_of_birth.year);
    }
    if(k == 0) printf("Не знайдено!\n");
    else printf("Видалити %d записів студентів? y/n \n", k);
    if (getch()!= 'n') {
    for(int i = 0; i<n; i++)
    if ((strcmp(oznaka, student[i].name.first_name) == 0) || (strcmp(oznaka, student[i].name.surname) == 0) || (strcmp(oznaka, student[i].name.patronymic) == 0) || (student[i].date_of_birth.day == x) || (student[i].date_of_birth.month == x) || (student[i].date_of_birth.year == x))
    {
        for (int j = i; j < n-1; j++) {
            student[j] = student[j+1] ;
        }
        n--;
    }
    printf("Видалено!\n\n");
    }
}

void sort(int n) 
{
    info_stud temp;
    for(int i = 1; i < n; i++)
        for(int j = n-1; j >= i; j--) {
            if(student[j-1].date_of_birth.day < student[j].date_of_birth.day)
            {
                temp = student[j-1]; student[j-1] = student[j]; student[j] = temp; 
            }
            if(student[j-1].date_of_birth.month < student[j].date_of_birth.month)
            {
                temp = student[j-1]; student[j-1] = student[j]; student[j] = temp; 
            }
            if(student[j-1].date_of_birth.year < student[j].date_of_birth.year)
            {
                temp = student[j-1]; student[j-1] = student[j]; student[j] = temp; 
            }
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