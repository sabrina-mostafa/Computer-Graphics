#include<bits/stdc++.h>
#include<graphics.h>
using namespace std ;

void drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, d, x, y;

    dx=x1-x0;
    dy=y1-y0;

    x=x0;
    y=y0;

    d=2*dy-dx;

    while(x<=x1)
    {
        if(d>=0)
        {
            putpixel(x,y,7);
            y=y+1;
            d=d+2*dy-2*dx;
        }
        else
        {
            putpixel(x,y,7);
            d=d+2*dy;
        }
        x=x+1;
    }
}

int main()
{
    int gdriver=DETECT, gmode, error, x0, y0, x1, y1;
    initgraph(&gdriver, &gmode, "");

	  // 200, 100, 300, 200
    cout<<"Enter co-ordinates of first point: ";
    cin>>x0>>y0;

    cout<<"Enter co-ordinates of second point: ";
    cin>>x1>>y1;
    drawline(x0, y0, x1, y1);
    getch();
    return 0;
}
