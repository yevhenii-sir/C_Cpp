#include <stdio.h>
main()
{
    int num, div, a = 2, b = 20, k = 0;
    printf("Прості числа від %d дo %d - ", a, b);
    for (num = a, k = 0; num <= b; num++)
    {
        for (div = 2; num % div != 0; div++);
        if (div == num)
        {
            printf("%4d", num);
            k++;
        }
    }
    printf("\nВсього = %d", k);
}
 