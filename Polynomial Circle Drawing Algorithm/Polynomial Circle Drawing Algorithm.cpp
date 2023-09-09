#include<bits/stdc++.h>
#include<graphics.h>
using namespace std ;


void setPixel(int x, int y, int h, int k)  
{  
    putpixel(x+h, y+k, RED);  
    putpixel(x+h, -y+k, RED);  
    putpixel(-x+h, -y+k, RED);  
    putpixel(-x+h, y+k, RED);  
    putpixel(y+h, x+k, RED);  
    putpixel(y+h, -x+k, RED);  
    putpixel(-y+h, -x+k, RED);  
    putpixel(-y+h, x+k, RED);  
}  

int main()  
{  
    int gd=0, gm, h, k, r ;  
    double x, y, x2 ;  
    initgraph(&gd, &gm, "") ;

    cout<<"\n\t\t***Polynomial method to draw a circle***\n" ;
    
    cout<<"\nenter the x and y coordinates:-\n" ;
    cin>>h>>k;                                          //h=200, k=200
    cout<<"\nenter the radius:-\n" ;
    cin>>r ;                                    // r=100
 
    x = 0 ;          // in Y-axis
    x2 = r/sqrt(2) ;            //  x/r = cos(45')  => x/r = 1/sqrt2())
    
    while(x<=x2)  
    {  
        y = sqrt(r*r - x*x) ;  
        setPixel(floor(x), floor(y), h, k) ;  
        x++ ;  
    }  

    getch();  
    closegraph();  
    return 0;  
}  
