#include <stdio.h>
#include <conio.h>
#include<string.h>
#include <stdlib.h>

//demo union
struct point
{
    int x,y;
};

struct rect
{
    point pt1, pt2;
};

struct circle
{
    point pt;
    int r;
};

union Figure
{
    point P;
    rect R;
    circle C;
};

int main()
{
    Figure tag;
    system("CLS");
    printf("Create by Yevhenii Sirenko\n\n");
    //randomize();
    //------------Point-------------
    puts("Vvedi koordinati tochki: ");
    scanf("%d%d",&tag.P.x, &tag.P.y);
    printf("\nTochka x=%d y=%d\n",tag.P.x,tag.P.y);
    //-----Circle---------------------
    tag.C.pt.x = tag.P.x;
    tag.C.pt.y = tag.P.y;
    puts("Vvedi radius"); scanf("%d",&tag.C.r);
    printf("\nCircle r=%d center: x=%d y=%d",tag.C.r,tag.C.pt.x,tag.C.pt.y);
    //-----------Rectangle------------------
    tag.R.pt1.x=tag.P.x;
    tag.R.pt1.y=tag.P.y;
    tag.R.pt2.x=rand()%20;
    tag.R.pt2.y=rand()%20;
    printf("\nRec pt1:x=%d y=%d pt2: x=%d y=%d",tag.R.pt1.x,tag.R.pt1.y,tag.R.pt2.x,tag.R.pt2.y);
    getch();
}