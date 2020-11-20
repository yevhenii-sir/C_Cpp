#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void Vvod(int A[],int &N)
{
	printf("Введіть розмір масиву: ");
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		printf("Введіть %d елемент масиву: ", i);
		scanf("%d", &A[i]);
	}
}

void Vivod(int A[], int N)
{
	printf("\nМасив: ");
	for (int i = 0; i < N; i++)
		printf("%4d", A[i]);

}

void ZapRand(int A[], int &N)
{
	printf("Введіть розмір масиву: ");
	scanf("%d", &N);
	printf("Масив: ");
	for (int i = 0; i < N; i++)
	{
		A[i] = rand()%100 - 50;
		printf("%4d", A[i]);
	}
}

void Podvoenna(int A[], int N)
{
	for (int i = 0; i < N; i++)
		A[i] = A[i] * 2;
	getch();
}

int NoMax(int A[], int N)
{
	int i = 0, imax = 0;
	for (i = 1; i < N; i++)
		if (A[i] > A[imax]) {
			imax = i;
		}
	return imax;
}

void Revers(int A[], int N)
{
	int i, c;
	for (i = 0; i < N/2; i++) {
		c = A[i];
		A[i] = A[N-1-i];
		A[N-1-i] = c;
	}
}

void Change(int* x, int* y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}

int Sum(int A[],int N)
{
	int sum = 0;
	for (int i = 0; i < N; i++)
		sum += A[i];
	return sum;
}

// int main()
// {
// 	int A[50];
// 	int N = 0, menu, Nomax;
// 	do {
// 		system("CLS");
// 		printf("Menu:\n 1 - Vvod masiva\n 2 - Zapovniti masiv randomno\n 3 - Vivod masiva\n 4 - podvonna masiva\n 5 - Nomer Max elem\n 6 - Revers Masiva\n 7 - Sum masiva\n 0 - Exit");
// 		printf("\nVvedit nomer: ");
// 		scanf("%d", &menu);
// 		switch (menu) {
// 			case 1: { 
// 				Vvod(A, N);
// 				break;
// 			}
// 			case 2:{
// 				ZapRand(A, N);
// 				break;
// 			}
// 			case 3: {
// 				Vivod(A, N);
// 				break;
// 			}
// 			case 4: {
// 				Podvoenna(A, N);
// 				break;
// 			}
// 			case 5:{
// 				Nomax = NoMax(A, N);
// 				printf("\nMax A[%d] = %d", Nomax, A[Nomax]);
// 				getch();
// 				break;
// 			}
// 			case 6: {
// 				revers(A, N);
// 				break;
// 			}
// 			case 7: {
// 				int SumA = Sum(A, N);
// 				printf("Suma masiva = %d", SumA);
// 				getch();
// 				break;
// 			}
// 			case 0: exit(0);
// 		}
// 	} while(1);
// }
