#include<iostream>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>

using namespace std;

int main()
{
    //Initializing the Variables
    int gd, gm, n, i, xa[10], ya[10], op, tx, ty, xa1[10], ya1[10], theta, xf, yf, rx, ry, shx, shy, xref, yref;
    float sx,sy;
    char d;
    //Initializing the Graphics Window
    gd = DETECT;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    cout<<"\nEnter the no. of points for the shape: ";
    cin>>n;
    for(i=0;i<n;i++)
        {
            cout<<"\nEnter the coordinates for the shape "<<i+1<<": ";
            cin>>xa[i]>>ya[i];
        }

    do  {
        //Menu for Selection of Transformation
        cout<<"\nChoose the 2D Transformation";
        cout<<"\n1.Translation\n2.Rotation\n3.Scaling\n4.Exit: ";
        cin>>op;
        switch(op)
        {
        case 1:
            cout<<"\nEnter the Translation Vector: ";
            cin>>tx>>ty;
            for(i=0;i<n;i++)
            {
                xa1[i]=xa[i]+tx;
                ya1[i]=ya[i]+ty;
            }
            cleardevice();
            cout<<"\nBefore Translation: ";
            for(i=0;i<n;i++)
            {
                setcolor(WHITE);
                line(xa[i],ya[i],xa[(i+1)%n],ya[(i+1)%n]);
            }
            delay(100);

            cout<<"\nAfter Translation: ";
            for(i=0;i<n;i++)
            {
                setcolor(GREEN);
                line(xa1[i],ya1[i],xa1[(i+1)%n],ya1[(i+1)%n]);
            }
            getch();
            cleardevice();
            break;

        case 2:
            cout<<"\nEnter the Rotation Angle: ";
            cin>>theta;
            theta=(theta*3.14)/180;
            cout<<"\nEnter the Reference Points: ";
            cin>>xf>>yf;
            for(i=0;i<n;i++)
            {
                xa1[i]=xf+(xa[i]-xf)*cos(theta)-(ya[i]-yf)*sin(theta);
                ya1[i]=yf+(xa[i]-xf)*sin(theta)-(ya[i]-yf)*cos(theta);
            }
            cleardevice();
            cout<<"\nBefore Rotation: ";
            for(i=0;i<n;i++)
            {
                setcolor(WHITE);
                line(xa[i],ya[i],xa[(i+1)%n],ya[(i+1)%n]);
            }
            delay(100);
            cout<<"\nAfter Rotation: ";
            for(i=0;i<n;i++)
            {
                setcolor(GREEN);
                line(xa1[i],ya1[i],xa1[(i+1)%n],ya1[(i+1)%n]);
            }
            getch();
            cleardevice();
            break;
        case 3:
            cout<<"\nEnter the Scaling Factor: ";
            cin>>sx>>sy;
            cout<<"\nEnter the Reference Point: ";
            cin>>rx>>ry;
            for(i=0;i<n;i++)
            {
                xa1[i]=xa[i]*sx+rx*(1-sx);
                ya1[i]=ya[i]*sy+ry*(1-sy);
            }
            cleardevice();

            cout<<"\nBefore Scaling: ";
            for(i=0;i<n;i++)
            {
                setcolor(WHITE);
                line(xa[i],ya[i],xa[(i+1)%n],ya[(i+1)%n]);
            }
            delay(100);
            cout<<"\nAfter Scaling: ";

            for(i=0;i<n;i++)
            {
                setcolor(GREEN);
                line(xa1[i],ya1[i],xa1[(i+1)%n],ya1[(i+1)%n]);
            }
            getch();
            cleardevice();
            break;

        case 4:
            break;
        default:
            cout<<"\nInvalid Input. Enter Correct Input!!";
        }
    }while(op!=4);

return 0;
}
