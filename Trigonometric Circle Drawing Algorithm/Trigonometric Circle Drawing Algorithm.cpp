#include<bits/stdc++.h>
#include<graphics.h>
using namespace std ;

void put8pixel(int x, int y, int h, int k)
{
    putpixel(x + h, y + k, RED);
    putpixel(x + h, -y + k, RED);
    putpixel(-x + h, -y + k, RED);
    putpixel(-x + h, y + k, RED);
    putpixel(y + h, x + k, RED);
    putpixel(y + h, -x + k, RED);
    putpixel(-y + h, -x + k, RED);
    putpixel(-y + h, x + k, RED);
}


int main()
{
    int xc, yc, x1, y1, x, y, c, s, r, d, theta ;

    cout<<"Enter the mid point h and k : " ;
    cin>>xc>>yc ;
    cout<<"Enter the radious : " ;
    cin>>r ;
    int gdriver = DETECT, gmode, errorcode ;

    initgraph( & gdriver, & gmode, "") ;
    float n = 3.14159 / 180 ;               // Degree to Radian

   for(theta = 0; theta <= 45; theta++)
    {
        x1 = r * cos(theta * n) ;
        y1 = r * sin(theta * n) ;
        x = int(x1 + 0.5) ;
        y = int(y1 + 0.5) ;

        put8pixel(x, y, xc, yc) ;
    }
    getch() ;

}
