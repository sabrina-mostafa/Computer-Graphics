#include<bits/stdc++.h>
#include <graphics.h>
using namespace std ;


int main()
{

    int gDriver = DETECT, gMode, errorcode ;

    initgraph( &gDriver, &gMode, "") ;    // Graphics Driver and Graphics Mode

    //int x1=200, y1=100 ;
    // int x2=300, y2=200 ;
    int x, y, x1, y1, x2, y2 ;
    int x_end=0, m, c ;

    cout<<"Enter the vale of x1 : " ;
    cin>>x1 ;
    cout<<"Enter the vale of y1 : " ;
    cin>>y1 ;
    cout<<"Enter the vale of x2 : " ;
    cin>>x2 ;
    cout<<"Enter the vale of y2 : " ;
    cin>>y2 ;


    int dx = x2-x1 ;
    int dy = y2-y1 ;

    m = dy/dx ;           // slope

    c = y1 - (m*x1) ;

    if(dx>0)
    {
        x = x1;
        y = y1 ;
        x_end = x2 ;
    }
    else
    {
        x = x2 ;
        y = y2 ;
        x_end = x1 ;
    }

    while(x<=x_end)
    {
        putpixel(x, y, RED) ;           // Ploting a point
        x++ ;
        y = (m*x) + c ;
    }

    getch();
    closegraph();

    return 0 ;
}
