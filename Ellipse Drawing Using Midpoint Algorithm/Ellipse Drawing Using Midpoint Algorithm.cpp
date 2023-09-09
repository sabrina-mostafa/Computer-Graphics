#include<bits/stdc++.h>
#include<graphics.h>
using namespace std ;

int main()
{
    long d1, d2;
    int i, gd, gm, x, y, x0, y0;
    long rx, ry, rxsq, rysq, tworxsq, tworysq, dx, dy;

    cout << "Enter the X radius and Y radius of the ellipse:\n";
    cin >> rx >> ry;       // 120 80

    cout << "Enter the center (x, y) of the ellipse:\n";
    cin >> x0 >> y0;       // 300 300

    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "d:\\tc\\BGI");

    cleardevice();

    rxsq = rx * rx;
    rysq = ry * ry;

    tworxsq = 2 * rxsq;
    tworysq = 2 * rysq;

    x = 0;
    y = ry;

    d1 = rysq - rxsq * ry + (0.25 * rxsq);

    dx = tworysq * x;
    dy = tworxsq * y;

    // Loop to plot points for the first half of the ellipse
    do
    {
        putpixel(x0 + x, y0 + y, WHITE);    //1st
        putpixel(x0 - x, y0 - y, WHITE);    //5th
        putpixel(x0 + x, y0 - y, WHITE);    //4th
        putpixel(x0 - x, y0 + y, WHITE);    //2nd

        if(d1 < 0)
        {
            x = x + 1;
            y = y;
            dx = dx + tworysq;
            d1 = d1 + dx + rysq;
        }
        else
        {
            x = x + 1;
            y = y - 1;
            dx = dx + tworysq;
            dy = dy - tworxsq;
            d1 = d1 + dx - dy + rysq;
        }
        delay(10);

    } while(dx < dy);

    d2 = rysq * (x + 0.5) * (x + 0.5) + rxsq * (y - 1) * (y - 1) - (rxsq * rysq);

    // Loop to plot points for the 2nd half of the ellipse
    do
    {
        putpixel(x0 + x, y0 + y, 15);
        putpixel(x0 - x, y0 - y, 15);
        putpixel(x0 + x, y0 - y, 15);
        putpixel(x0 - x, y0 + y, 15);

        if (d2 > 0)
        {
            x = x;
            y = y - 1;
            dy = dy - tworxsq;
            d2 = d2 - dy + rxsq;
        }
        else
        {
            x = x + 1;
            y = y - 1;
            dx = dx + tworysq;
            dy = dy - tworxsq;
            d2 = d2 + dx - dy + rxsq;
        }

    } while(y > 0);

    getch();
    closegraph();
}
