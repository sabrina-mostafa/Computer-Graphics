#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

 
void boundaryfill(int x,int y,int f_color,int b_color)
{
    if(getpixel(x,y)!=b_color && getpixel(x,y)!=f_color)
    {
    putpixel(x,y,f_color);
    boundaryfill(x+1,y,f_color,b_color);
    boundaryfill(x,y+1,f_color,b_color);
    boundaryfill(x-1,y,f_color,b_color);
    boundaryfill(x,y-1,f_color,b_color);
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

    initgraph(&gd,&gm,"");
    circle(x,y,radius);
    boundaryfill(x,y,4,15);
    delay(5000);
    closegraph();


    return 0;
}