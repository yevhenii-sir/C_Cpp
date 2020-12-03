#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

void Vvod(int *A, int *N)
{
	for (int i = 0; i < *N; i++) {
		printf("Введіть %d елемент масиву: ", i);
		scanf("%d", &A[i]);
	}
}

void Vivod(int A[], int N)
{
	printf("\nМасив: ");
	for (int i = 0; i < N; i++)
		printf("%4d", A[i]);
	printf("\n");

}

int PaniIndeks(int Array[],int *N)
{
    int k = 0;
    for (int i = 0; i < *N; i++) {
        if ((Array[i] % 2 != 0)&&(i % 2 == 0)) k++;
    }
    return k;
}

int main()
{
    int H[10], n = 10, menu;
    
    do {
        printf("\nCreate by Yevhenii Sirenko\n");
        printf("Меню:\n 1 - Ввод масиву\n 2 - Непарні елементи з парним індексом\n 0 - Вихід\nВведіть номер: ");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1: Vvod(H, &n);
            break;
        case 2: {
            Vivod(H, n);
            printf("Кількість непарних елементів з парним індексом = %d\n", PaniIndeks(H, &n));
            break;
        }
        case 0: exit(0);
        default:
            printf("Ви ввели не правильно!");
        }
    } while (1);
}