#include <stdio.h>
#include <conio.h>

main()
{
    FILE *f1;
    int i = 0;
    char c;
    f1 = fopen("Sirenko.txt", "w");
    printf("Vvedi symbols: ");
    while ((c = getchar()) != EOF)
    fputc(c, f1);
    fclose(f1);
    f1 = fopen("Sirenko.txt", "r");
    while (!feof(f1))
    {
        c = fgetc(f1);
        printf("%c ", c);
        i++;
    }
    fclose(f1);
    printf("\nZchitano %d symbols!", i);
    getch();
}
