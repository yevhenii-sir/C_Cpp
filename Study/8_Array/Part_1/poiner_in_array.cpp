#include <conio.h>
#include <iostream>
using namespace std;

int SumArray(int *array, int size_array);

int main () 
{
    int array_one[10];
    int size_array_one = sizeof(array_one) / sizeof(int);
    for (int i = 0; i < size_array_one; i++){
        array_one[i] = i;
    }
    int sum = SumArray(array_one, size_array_one);
    cout<<"Suma = "<<sum;
    return 0;
}

int SumArray(int *array, int size_array)
{
    int Sum = 0;
    for (int i = 0; i < size_array; i++) Sum += array[i];
    return Sum;
}