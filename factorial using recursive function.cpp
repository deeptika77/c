// to print factorial of a number using recursive function(function that calls itself)
#include<stdio.h>
int fact(int);
int main()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	int b=fact(n);
	printf("the factorial of %d is %d",n,b);
}
int fact(int n)
{
	if (n<=1)
	{
		return 1; // yo 1 line no 19 ko fact(n-1) ma gayera return huncha
	}
	else{
		return n*fact(n-1); 
		
	}
}
