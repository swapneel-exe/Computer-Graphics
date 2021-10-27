//Bresenham Line Algorithm
#include <graphics.h>
#include <iostream>
#include <conio.h>
#include <dos.h>

using namespace std;

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   int x1, y1, x2, y2;
   float dx, dy, i1, i2, d, x, y;
   cout<<"\nEnter X and Y Coordinates of Starting Point: ";
   cin>>x1>>y1;
   cout<<"\nEnter X and Y Coordinates of Ending Point: ";
   cin>>x2>>y2;
   dx = float(x2 - x1);
   dy = float(y2 - y1);
   i1 = 2 * dy;
   i2 = 2 *(dy-dx);
   d = i1 - dx;
   x = x1;
   y = y1;
   while(x < x2)
   {
       if(d >= 0)
       {
           delay(100);
           putpixel( x, y, WHITE);
           y++;
           d = d + 2*(dy - dx);
       }
       else
       {
           delay(100);
           putpixel( x, y, WHITE);
           d = d + 2 * dy;
       }
       x++;
   }
   getch();
   closegraph();
   return 0;
}
