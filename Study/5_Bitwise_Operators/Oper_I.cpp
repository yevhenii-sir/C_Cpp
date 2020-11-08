#include <stdio.h>
#include <conio.h>

int main ()
{
    printf("Operation Ne '~': \n");
    unsigned char ch = 254;
    unsigned char not_ch = ~ch;
    printf("ch = %d, ~ch = %d\n------------------------------\n", (int)ch, (int)not_ch);

    printf("Operation I '&': \n");
    unsigned char flags = 5;
    unsigned char mask = 4;

    unsigned char res = flags & mask;
    printf("f = %d & m = %d rez = %d\n",(int)flags, (int)mask, (int)res);

   // printf("Operation I '&': \n");
    flags = 13;
    mask = 7;

    if ((flags&mask) == mask) printf("-------------\nf = %d & m = %d == m ---> включен 2 и 0 бит\n",(int)flags, (int)mask);
    

    printf("выключение символов");
    flags &= ~mask;
    flags = flags | mask;
    printf("\nflags = %d", (int)flags);

    getch();
    return 0;
}
