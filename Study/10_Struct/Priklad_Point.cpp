#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

struct point
{
    int x, y;
};

point makepoint(int a, int b)

{
    point temp;
    temp.x=a;
    temp.y=b;
    return temp;
}

point addpoint(point pt1, point pt2)
{
    pt1.x+=pt2.x;
    pt1.y+=pt2.y;
    return pt1;
}

double dist (point pt0, point pt)
{
    return sqrt(pow((pt0.x-pt.x),2)+pow((pt0.y-pt.y),2));
}

ptincirc (int r, point pt1, point pt2)
{
    return dist(pt1,pt2)<=r;
}

main()
{
    int rr;
    point pt1, pt2;
    printf("Create by Yevhenii Sirenko\n\nКоординати точки №1: ");
    scanf("%d%d",&pt1.x,&pt1.y);
    printf("\nКоординати точки №2: ");
    scanf("%d%d",&pt2.x,&pt2.y);
    printf("Введіть радіус: \n");
    scanf("%d",&rr);
    printf("Дистанція = %.2f\n", dist(pt1,pt2));
    if (ptincirc(rr,pt1,pt2)) printf("\nТочка всередені!");
    else printf("\nТочка зовні!");
    getch();
}