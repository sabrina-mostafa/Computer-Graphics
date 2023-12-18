#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;


void floodFill(int x,int y,int oldcolor,int newcolor)
{
    if(getpixel(x,y) == oldcolor)
    {
    putpixel(x,y,newcolor);
    floodFill(x+1,y,oldcolor,newcolor);
    floodFill(x,y+1,oldcolor,newcolor);
    floodFill(x-1,y,oldcolor,newcolor);
    floodFill(x,y-1,oldcolor,newcolor);
    }
}


int main()
{
    int gm,gd=DETECT,radius;
    int x,y;

    cout<<"Enter x and y positions for circle: ";
    cin>>x>>y;
    cout<<"Enter radius of circle: ";
    cin>>radius;

    initgraph(&gd,&gm," ");
    circle(x,y,radius);
    floodFill(x,y,0,4);
    delay(5000);
    closegraph();


    return 0;
}