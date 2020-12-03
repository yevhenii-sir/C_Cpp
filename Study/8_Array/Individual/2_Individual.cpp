#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

void Vivod(int (*A)[50], int N, int M)
{
    system("CLS");
    printf("Матриця: \n");
    for (int i = 0; i < N; i ++ ) {
    for (int j = 0; j < M; j ++ )
    printf("%5d", A[i][j]);
    printf("\n");
    }
}

void Vvod(int (*A)[50], int *N, int *M)
{
    system("CLS");
    int i, j, menu;
    printf("Введіть кількість рядків і строк: ");
    scanf("%d%d", N, M);
    do {
    printf("Варіанти заповнення:\n 1 - Ручне\n 2 - Випадкове\nВведіть номер: ");
    scanf("%d", &menu);
    } while ((menu < 0)&&(menu >= 2));
    switch (menu)
    {
    case 1: {
        for (i = 0; i < *N; i ++ )
        for (j = 0; j < *M; j ++ ) {
            printf (" A[%d][%d] = ", i, j);
            scanf ("%d", &A[i][j] ); 
        }
        break;
        }
    case 2: {
        for (i = 0; i < *N; i ++ )
        for (j = 0; j < *M; j ++ ) {
            A[i][j] = rand()%20 - 10;
        }
        Vivod(A, *N, *M);
        getch();
        break;
        }
    }
}

void Suma_Arr(int (*A)[50], int N, int M)
{
    if (N == M) {
    int sum = 0;
    for (int i = 0; i < N; i++)
        sum += A[i][i];
    float sznach = sum / (float)M;
    int k = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        if (A[i][j] < sznach ) k++;
    printf("Середнє значення = %.1f\n", sznach);
    printf("Кількість елементів менші за середнє знач головної діагоналі: %d", k);
    }
    else {
        printf("У вас не квадратна матриця!");
    }
    getch();
}

void suma_diag(int (*A)[50], int N, int M)
{
    system("CLS");
    Vivod(A, N, M);
    if (N == M) {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < N; i++)
        sum1 += A[i][i];
    printf("\nСума головної діагоналі: %d\n", sum1);
    for (int i = 0; i < N; i ++)
        sum2 += A[i][N - 1 - i];
    printf("Сума другої діагоналі: %d\n", sum2);
    printf("Сума двох діагоналей: %d", sum1 + sum2);
    }
    else {
        printf("У вас не квадратна матриця!");
    }
    getch();
}

void add_row(int (*A)[50], int *N, int *M)
{
    system("CLS");
    printf("1 - Додати рядок\n2 - Додати стопчик\nВведи номер: ");
    int pN = *N, pM = *M;
    int menu;
    scanf("%d", &menu);
    switch (menu)
    {
        case 1: {
            *N += 1;
            for (int i = 0; i < *N; i++) {
                printf("Уведіть A[%d][%d]: ", *N+1, i+1);
                scanf("%d", &A[pN][i]);
            }
            printf("Готово!!!");
            break;
        }
        case 2: {
            *M += 1;
            for (int i = 0; i < *M; i++) {
                printf("Уведіть A[%d][%d]: ", i+1, *M+1);
                scanf("%d", &A[i][pM]);
            }
            printf("Готово!!!");
            break;
        }
        default: {
            printf("Ви ввели неправильно!");
            break;
        }
    }
    getch();
}

void del_row(int (*A)[50], int *N, int *M)
{
    system("CLS");
    printf("1 - Удалити рядок\n2 - Удалити стопчик\nВведи номер: ");
    int pN = *N, pM = *M;
    int menu;
    scanf("%d", &menu);
    switch (menu){
        case 1: {
            printf("Введіть який рядок видалити: ");
            int x;
            scanf("%d", &x);
            x++;
            for (int i = x; i < pN - 1; i++)
                for (int j = 0; j < pM; j++)
                A[i][j] = A[i + 1][j];
            *N -= 1;
            printf("Готово!!!");
            break;
        }
        case 2: {
            int x;
            printf("Введіть який стопчик видалити: ");
            scanf("%d", &x);
            x++;
            for (int i = 0; i < pN; i++)
                for (int j = x; j < pM - 1; j++)
                A[i][j] = A[i][j + 1];
            *M -= 1;
            printf("Готово!!!");
            break;
        }
    }
    getch();
}

int main()
{
    int A[50][50], N = 0, M = 0, menu;
    do {
        system("CLS");
        printf("\nCreate by Yevhenii Sirenko\n");
        printf("Меню: \n 1 - Ввод масиву \n 2 - Вивод масиву \n 3 - Кількість елем\n 4 - Сума діагонлей\n 5 - Додати рядок(стопчик)\n 6 - Видалити рядок(стопчик)\n 0 - Вихід\nВведіть номер: ");
        scanf("%d", &menu);
        switch (menu) {
            case 1: {
                Vvod(A, &N, &M);
                break;
            }
            case 2: {
                Vivod(A, N, M);
                getch();
                break;
            }
            case 3: {
                system("CLS");
                Suma_Arr(A, N, M);
                break;
            }
            case 4: {
                suma_diag(A, N, M);
                break;
            }
            case 5: {
                add_row(A, &N, &M);
                break;
            }
            case 6: {
                del_row(A, &N, &M);
                break;
            }
            case 0: {
                exit(0);
                break;
            }
        }
    } while (1);
}