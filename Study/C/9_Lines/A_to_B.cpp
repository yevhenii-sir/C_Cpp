#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

int main()
{
    char s[80];
    int length_s = 0;
    printf("Vvedit stroku: ");
    gets(s);
    //double n = strtod(s);
   // printf("N = %lf", n);

    printf("Vvedit stroku: ");
    gets(s);
    //scanf("%s", s);
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] == 'a') {
            s[i] = 'b';
        }
        // if ((s[i] == 'h')||(s[i] == 'H'))
        // {
        //     s[i] = '';
        // }
        i++;
        length_s++;
    }
    puts(s);
    printf("Result(Length = %d): %s\n",length_s, s);
    int n = strlen(s);
    printf("srtlen = %d\n\n\n", n);

    char q1[80], q2[80];
    //int n;
    gets ( q1 );
    gets ( q2 );
    n = strcmp ( q1, q2 );
    printf("n = %d", n);
}