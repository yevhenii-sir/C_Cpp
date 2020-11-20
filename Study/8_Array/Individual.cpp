#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include "../Array_Func.cpp"

int main() 
{
    int A[50], N = 0, k;
    ZapRand(A, N);
    printf("\nVVedit kilkist chisel zsuvu: ");
    scanf("%d", &k);
    for (int j = 1; j <= k; j++) {
        for (int i = 0; i < N - 1; i++){
            Change(&A[i], &A[i + 1]);
        }
    }
    Vivod(A, N);
    getch();
    return 0;
}