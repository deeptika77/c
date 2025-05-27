// to check whether the nth term of fibonacci is prime or not
#include<stdio.h>
int fib(int);
int check(int);
int main()
{
	int n;
	printf("Enter no of terms");
	scanf("%d",&n);
	int b=fib(n);
	int c=check(b);
	if(c==2){
	printf("%d is prime",b);
	}
	else{ 
	printf("%d is not prime",b);
	}
	return 0;
}
int fib(int n){
	int i,a=0,b=1,c;
	for(int i=2;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}
int check(int b){
	int i,c=0;
	for(i=1;i<=b;i++)
	{
		if(b%i==0){
			c++;
		}
	}
	return c;
}
