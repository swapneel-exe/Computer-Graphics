#include<stdio.h>
#include <dos.h>
#include<graphics.h>

void drawcircle(int xc, int yc, int r)
{
    int x = r;
    int y = 0;
    int p = (5/4)-r;

    while (x >= y)
    {
        delay(100);
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc + y, yc + x, WHITE);
        putpixel(xc - y, yc + x, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc - y, yc - x, WHITE);
        putpixel(xc + y, yc - x, WHITE);
        putpixel(xc + x, yc - y, WHITE);

        if (p <= 0)
        {
            y += 1;
            p += (2*y + 1);
        }

        if (p > 0)
        {
            x -= 1;
            p -= (2*x + 1);
        }
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
drawcircle(x, y, r);
getch();
closegraph();
return 0;
}
