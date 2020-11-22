#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include "../Array_Func.cpp"

void Offset_array(int *array, int *array_size, int *offset_size)
{
    for (int j = 1; j <= *offset_size; j++) {
            for (int i = 0; i < *array_size - 1; i++){
                Change(&array[i], &array[i + 1]);
        }
    }
}

int main() 
{
    int array_numbers[50], array_size = 0, offset_size;
    ZapRand(array_numbers, &array_size);
    Vivod(array_numbers, array_size);
    printf("Введіть кількість чисел для зсуву в ліво: ");
    scanf("%d", &offset_size);
    Offset_array(array_numbers, &array_size, &offset_size);
    Vivod(array_numbers, array_size);
    getch();
    return 0;
}