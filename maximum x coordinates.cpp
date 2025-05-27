#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main(){
	int gd=DETECT,gm;
	int max_x;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	max_x=getmaxx();
	printf("Maximum x cordinate=%d",max_x);
	getch();
	closegraph();
	return 0;
}
