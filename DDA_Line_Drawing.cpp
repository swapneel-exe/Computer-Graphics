//DDA Line Algorithm
#include <graphics.h>
#include <dos.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   int x1, y1, x2, y2, m, i;
   float dx, dy, x, y;
   cout<<"\nEnter X and Y Coordinates of Starting Point: ";
   cin>>x1>>y1;
   cout<<"\nEnter X and Y Coordinates of Ending Point: ";
   cin>>x2>>y2;
   dx = float(x2 - x1);
   dy = float(y2 - y1);
   if(dx > dy)
    m = dx;
   else
    m = dy;
   dx = dx/m;
   dy = dy/m;
   x = x1;
   y = y1;
   i = 1;
   while(x <= x2)
   {
       delay(100);
       putpixel( x, y, WHITE);
       x += dx;
       y += dy;
       i++;
   }
   getch();
   closegraph();
   return 0;
}
