#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

struct point
{
    int x, y;
};

struct rect
{
    point point1, point2;
};

int main()
{
    rect x[2], *y;
    //*x = main_x;
    y = &x[2];
    y[1].point1.x = 10;
    x[1].point1.y = 20;
    printf("point[1].point 1 = %d", x[1].point1.x);
    scanf("%d", &x[2].point1.x);
    printf("point[2].point 1 = %d", x[2].point1.x);
    return 0;
}