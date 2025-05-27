#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main(){
	int gd=DETECT,gm;
	int x,y,r;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	x=300,y=300;
	r=100;
	circle(x,y,r);
	getch();
	closegraph();
	return 0;
}
