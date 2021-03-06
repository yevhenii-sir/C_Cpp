#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int A[50][50], N = 0, M = 0;

void Vivod()
{
    system("CLS");
    printf("Матриця: \n");
    for (int i = 0; i < N; i ++ ) {
    for (int j = 0; j < M; j ++ )
    printf("%5d", A[i][j]);
    printf("\n");
    }
}

void Vvod()
{
    system("CLS");
    int i, j, menu;
    printf("Введіть кількість рядків і строк: ");
    scanf("%d%d", &N, &M);
    do {
    printf("Варіанти заповнення:\n 1 - Ручне\n 2 - Випадкове\nВведіть номер: ");
    scanf("%d", &menu);
    } while ((menu < 0)&&(menu >= 2));
    switch (menu)
    {
    case 1: {
        for (i = 0; i < N; i ++ )
        for (j = 0; j < M; j ++ ) {
            printf ("A[%d][%d]=", i, j);
            scanf ("%d", &A[i][j] ); 
        }
        break;
        }
    case 2: {
        for (i = 0; i < N; i ++ )
        for (j = 0; j < M; j ++ ) {
            A[i][j] = rand()%20 - 10;
        }
        Vivod();
        getch();
        break;
        }
    }
}

int Suma_Arr()
{
    int S = 0;
    for (int i = 0; i < N; i ++ )
    for (int j = 0; j < M; j ++ )
        S += A[i][j];
    return S;
}

void suma_diag()
{
    system("CLS");
    Vivod();
    if (N == M) {
    int sum = 0;
    for (int i = 0; i < N; i++)
        sum += A[i][i];
    printf("\nСума головної діагоналі: %d\n", sum);
    sum = 0;
    for (int i = 0; i < N; i ++)
        sum += A[i][N - 1 - i];
    printf("Сума другої діагоналі: %d\n", sum);
    }
    else {
        printf("У вас не квадратна матриця!");
    }
    getch();
}

void Max_Min_Array()
{
    system("CLS");
    int maxN1 = 0, maxN2 = 0, minN1 = 0, minN2 = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (A[maxN1][maxN2] < A[i][j]) {
                maxN1 = i;
                maxN2 = j;
            }
            if (A[minN1][minN2] > A[i][j]) {
                minN1 = i;
                minN2 = j;
            }
        }
    }
    Vivod();
    printf("\nМакcимальний елемент А[%d][%d] = %d\n", maxN1, maxN2, A[maxN1][maxN2]);
    printf("Мінімальний елемент А[%d][%d] = %d\n", minN1, minN2, A[minN1][minN2]);
    getch();
}

void Sum_Max()
{
    system("CLS");
    Vivod();
    printf("\n");
    int sum, max;
    for (int i = 0; i < N; i++) {
        printf("Рядок %d: ", i + 1);
        sum = 0; max = A[i][0];
        for (int j = 0; j < M; j++){
            printf("%5d", A[i][j]);
            sum += A[i][j];
            if (A[i][j] > max) max = A[i][j];
        }
        printf(" : Сума = %d; Максимум = %d;\n", sum, max);
    }
    for (int j = 0; j < M; j++) {
        printf("Стопчик %d: ", j + 1);
        sum = 0; max = A[0][j];
        for (int i = 0; i < N; i++){
            printf("%5d", A[i][j]);
            sum += A[i][j];
            if (A[i][j] > max) max = A[i][j];
        }
        printf(" : Сума = %d; Максимум = %d;\n", sum, max);
    }
    getch();
}

int main()
{
    int menu;
    do {
        system("CLS");
        printf("\nCreate by Yevhenii Sirenko\n");
        printf("Меню: \n 1 - Ввод масиву \n 2 - Вивод масиву \n 3 - Сума елементів масива\n 4 - Сума діагонлей \n 5 - Мінімальний і максимальний елемент\n 6 - Сума і максимум рядка(стопчика)\n 0 - Вихід\nВведіть номер: ");
        scanf("%d", &menu);
        switch (menu) {
            case 1: {
                Vvod();
                break;
            }
            case 2: {
                Vivod();
                getch();
                break;
            }
            case 3: {
                system("CLS");
                Vivod();
                printf("\nСума елементів масиву = %d\n", Suma_Arr());
                getch();
                break;
            }
            case 4: {
                suma_diag();
                break;
            }
            case 5: {
                Max_Min_Array();
                break;
            }
            case 6: {
                Sum_Max();
                break;
            }
            case 0: {
                exit(0);
                break;
            }
        }
    } while (1);
}