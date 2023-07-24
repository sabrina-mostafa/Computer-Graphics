#include<bits/stdc++.h>
#include<graphics.h>
using namespace std ;


int main()
{
    int gDriver = DETECT, gMode, errorcode ;

    initgraph( &gDriver, &gMode, "") ;             // Graphics Driver and Graphics Mode

    //int x1=200, y1=100 ;
    // int x2=100, y2=200 ;
    float x, y, x1, y1, x2, y2 ;
    float x_end=0, m, c, dx, dy, step, x_inc, y_inc ;

    cout<<"Enter the vale of x1 : " ;
    cin>>x1 ;
    cout<<"Enter the vale of y1 : " ;
    cin>>y1 ;
    cout<<"Enter the vale of x2 : " ;
    cin>>x2 ;
    cout<<"Enter the vale of y2 : " ;
    cin>>y2 ;


    dx = abs(x2-x1) ;
    dy = abs(y2-y1) ;

    if(dx>=dy)          // step will be the bigger value
        step = dx ;
    else
        step = dy ;

    x_inc = dx/step ;           // increment
    y_inc = dy/step ;

    x = x1 ;
    y = y1 ;

    int i=1 ;
    while(i<=step)
    {
        putpixel(x, y, YELLOW) ;          // Ploting a point

        x = x + x_inc ;
        y = y + y_inc ;
        i++ ;

        delay(50);
    }

    return 0;
}
