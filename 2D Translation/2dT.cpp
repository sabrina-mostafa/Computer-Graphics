#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
    int gd=DETECT,gm,s;
    initgraph(&gd,&gm,(char*)"");
    int n,a[500], b[500], p, q;
    cout << "Enter the number of sides of polygon: ";
    cin >> n;
    cout << "Enter the co-ordinates x,y for each vertex: ";
    for(int i=0; i<n; i++)
        cin>>a[i]>>b[i];
    cout << "Enter the distance for translation: ";
    cin >> p >> q;
    setcolor(GREEN);
    for(int i=0; i<n; i++)
        line(a[i],b[i],a[(i+1)%n],b[(i+1)%n]);

    for(int i=0; i<n; i++)
    {
        a[i]+=p;
        b[i]+=q;
    }

    setcolor(BLUE);
    for(int i=0; i<n; i++)
        line(a[i],b[i],a[(i+1)%n],b[(i+1)%n]);

    getch();

    return 0;
}
