// program to find the value of x^y 
#include<stdio.h>
int power(int,int);
int main()
{
	int x,y;
	printf("Enter the value of x and y");
	scanf("%d%d",&x,&y);
	printf("\n the desired output is %d",power(x,y));
	return 0;
}
int power(int x,int y){
int i,m=1;
for(i=0;i<y;i++)
{
m=m*x;
}
return m;
}
