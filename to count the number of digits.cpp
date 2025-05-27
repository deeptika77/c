// to count the number of digits
#include<stdio.h>
int count(int);
int main(){
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	printf("The number of digits of %d is %d",n,count(n));
	
}
int count(int n)
{
int c=0;
	while(n>0)
	{
	c++;
	n=n/10;	
	}
	return c;
}
