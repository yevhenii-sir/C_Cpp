#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int a[10][10];

void vvmatr(int k, int n)
{
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand()%50;
        }
    }
}

void vivmatr(int k, int n)
{
    for (int i = 0; i < k; i++) 
    {
        for (int j = 0; j < n; j++){
            printf("%4d", a[i][j]);
        }
    printf("\n");
    }
}

void obch(int k, int n)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j) {
                sum += a[i][j];
            }
        }
    }
    printf("\nCума елементів над головою діагональю = %d", sum);
}

void min(int k, int n)
{
    int minn = a[0][0], r = 0, st = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] < minn) {
                minn = a[i][j];
                r = i;
                st = j;
            }
        }
    }
    printf("\nМінімальний елемент = %d; Pядок = %d; Cтовпчик = %d", minn, r+1, st+1);
}

int main()
{
    int k, n;
    printf("Create by Yevhenii Sirenko");
    printf("\nВведи кількість рядків матриці: ");
    scanf("%d", &k);
    printf("\nВведи кількість стовпчиків: ");
    scanf("%d", &n);
    vvmatr(k, n);
    vivmatr(k, n);
    obch(k, n);
    min(k, n);
    return 0;
}