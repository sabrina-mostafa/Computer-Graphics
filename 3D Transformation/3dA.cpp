#include<iostream>
#include<graphics.h>
#include<math.h>
#include<conio.h>

using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    cout<<"1.Rotation\n2.Translation\n3.Scaling\n"<<endl;
    cout<<"Selection:";
    int s;
    cin>>s;
    switch(s)
    {
    case 1:
    {
        int x1, y1, x2, y2, theta;
        cout<<"\n \t 3D  Rotation\n\n";
        cout<<"enter the 1st point (top left corner) :  ";
        cin>>x1>>y1;
        cout<<"\n enter the 2nd point (bottom right corner) :  ";
        cin>>x2>>y2;
        cout<<"\n enter the angle :  ";
        cin>>theta;

        int a1,b1,a2,b2;

        a1 = x1*cos(theta) - y1*sin(theta);
        b1 = x1*sin(theta)  + y1*cos(theta);
        a2 = x2*cos(theta) - y2*sin(theta);
        b2 = x2*sin(theta) + y2*cos(theta);

        //Before
        bar3d(x1,y1,x2,y2,30,1) ;//30 is the depth
        outtextxy(x2+25, y2, "Before Rotation");
        //After
        bar3d(a1,b1,a2,b2,30,1);
        outtextxy(a2+25, b2, "After Rotation");
        getch();
        break;
    }
    case 2:
    {
        int x1, y1, x2, y2, tx,ty;
        cout<<"\n \t 3D  Translation\n\n";
        cout<<"enter the 1st point (top left corner) :  ";
        cin>>x1>>y1;
        cout<<"\n enter the 2nd point (bottom right corner) :  ";
        cin>>x2>>y2;
        cout<<"\n enter translation co-ordinates (tx,ty) :  ";
        cin>>tx>>ty;

        outtextxy(x2+35, y2, "Before Translation");
        bar3d(x1,y1,x2,y2,25,1);

        x1 = x1+tx;
        y1 = y1+ty;
        x2 = x2+tx;
        y2 = y2+ty;

        outtextxy(x1,y2+35,"After Translation");
        bar3d(x1,y1,x2,y2,25,1);
        getch();
        break;
    }
    case 3:
    {
        int x1, y1, x2, y2, sx,sy;
        cout<<"\n \t 3D  Scaling\n\n";
        cout<<"enter the 1st point (top left corner) :  ";
        cin>>x1>>y1;
        cout<<"\n enter the 2nd point (bottom right corner) :  ";
        cin>>x2>>y2;
        cout<<"\n enter scalling co-ordinates (sx,sy) :  ";
        cin>>sx>>sy;

        outtextxy(x2+35,y2,"Before Scaling");
        bar3d(x1,y1,x2,y2,25,1);

        x1 = x1*sx;
        y2 = y1*sy;
        x2 = x2*sx;
        y2 = y2*sy;

        outtextxy(x1,y2+35,"After Scaling");
        bar3d(x1,y1,x2,y2,25,1);
        getch();
        break;
    }
    default:
    {
        cout<<"Invalid Selection"<<endl;
        break;
    }
    }
    closegraph();
    return 0;
}
