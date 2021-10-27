#include<stdio.h>
#include <dos.h>
#include<graphics.h>

void Bresenham(int x0,int y0,int r)
{
    int x=0;
    int y=r;
    int d=3-(2*r);
    delay(100);
        putpixel(x0 + x, y0 + y, WHITE);
        putpixel(x0 + y, y0 + x, WHITE);
        putpixel(x0 - y, y0 + x, WHITE);
        putpixel(x0 - x, y0 + y, WHITE);
        putpixel(x0 - x, y0 - y, WHITE);
        putpixel(x0 - y, y0 - x, WHITE);
        putpixel(x0 + y, y0 - x, WHITE);
        putpixel(x0 + x, y0 - y, WHITE);

    while(x<=y)
     {
      if(d<=0)
             {
        d=d+(4*x)+6;
      }
     else
      {
        d=d+(4*x)-(4*y)+10;
        y=y-1;
      }
       x=x+1;
       delay(100);
        putpixel(x0 + x, y0 + y, WHITE);
        putpixel(x0 + y, y0 + x, WHITE);
        putpixel(x0 - y, y0 + x, WHITE);
        putpixel(x0 - x, y0 + y, WHITE);
        putpixel(x0 - x, y0 - y, WHITE);
        putpixel(x0 - y, y0 - x, WHITE);
        putpixel(x0 + y, y0 - x, WHITE);
        putpixel(x0 + x, y0 - y, WHITE);
      }
}

int main()
{
int gd = DETECT, gm, x, y, r;
initgraph(&gd, &gm, "C:\\TC\\BGI");

printf("Enter Radius of Circle: ");
scanf("%d", &r);
printf("Enter Co-ordinates of Center(X and Y): ");
scanf("%d %d", &x, &y);
Bresenham(x, y, r);
getch();
closegraph();
return 0;
}

