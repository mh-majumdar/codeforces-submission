#include <bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
	float x,y,dx,dy,x1,y1,x2,y2,step;
	int gd=DETECT,gm;

	initgraph(&gd,&gm,"");

	cout<<"Enter first point:"<<endl;
	cin>>x1>>y1;
	cout<<"Enter first point:"<<endl;
	cin>>x2>>y2;

    dx=abs(x2-x1);
    dy=abs(y2-y1);

    if(dx>=dy) step=dx;
    else step=dy;

    dx=dx/step;
    dy=dy/step;

    x=x1,y=y1;
    int i=1;
    while(i<=step){
    	putpixel(x,y,5);
    	x=x+dx;
    	y=y+dy;
    	i++;
    	delay(100);
    }
    return 0;

}