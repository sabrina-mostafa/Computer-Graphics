#include<bits/stdc++.h>
#include<graphics.h>
using namespace std ;


void drawCircle(int x, int y, int xc, int yc)
{
	putpixel(x+xc,y+yc,YELLOW);
	putpixel(-x+xc,y+yc,YELLOW);
	putpixel(x+xc, -y+yc,YELLOW);
	putpixel(-x+xc, -y+yc, YELLOW);
	putpixel(y+xc, x+yc, YELLOW);
	putpixel(y+xc, -x+yc, YELLOW);
	putpixel(-y+xc, x+yc, YELLOW);
	putpixel(-y+xc, -x+yc, YELLOW);
}

int main()
{
	int gd = DETECT, gm;
	int r, xc, yc, d, x, y;
	initgraph(&gd, &gm, "");

	cout<<"Enter the center co-ordinates\n";
	cin>>xc>>yc;		// 200 250
	cout<<"Enter the radius of circle\n";
	cin>>r;		// 90

	d = 3-2*r;
	x=0;
	y = r;
	drawCircle(x,y,xc,yc);

	while(x <= y)
	{
		if(d < 0)
		{
			d = d + (4*x) + 6;
			drawCircle(++x,y,xc,yc);
		}
		else
		{
			d = d + (4*(x-y)) + 10;
			drawCircle(++x,--y,xc,yc);
		}
	}

	getch();
	closegraph();
}
