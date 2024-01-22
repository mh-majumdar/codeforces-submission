#include<graphics.h>
int main(){
	int gd=DETECT,gm;

	initgraph(&gd,&gm,"");
	line(10,20,30,40);

	getch();
	closegraph();
}