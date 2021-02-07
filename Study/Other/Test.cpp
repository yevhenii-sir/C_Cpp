#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct info_product
{
    char name_product[25];
    int price_product;
    int unique_number;
};

void write_to_file()
{

}

int main
{
    short int menu;
    do {
        switch (menu)
        {
        case 1: {
            write_to_file;
            break;
        }    
        case 0: return 0;
        default:
            break;
        }
    } while (1);
}