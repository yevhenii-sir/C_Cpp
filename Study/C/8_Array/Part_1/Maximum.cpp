//#include <iostream>
#include <stdio.h>
#include "../Array_Func.cpp"
using namespace std;

int main()
{
    int array[20], size_array = 20, max, min;
    ZapRand(array, &size_array);
    Vivod(array, size_array);
    max, min = array[0];
    for (int i = 0; i < size_array; i++) {
        max = ((max < array[i]) ? array[i] : max);
        min = ((min > array[i]) ? array[i] : min);
    }
    printf("Max = %d; Min = %d", max, min);
    return 0;
}