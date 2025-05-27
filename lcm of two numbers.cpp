// to find the lcm of two numbers
#include<stdio.h>
int lcm(int,int);
int main()
{
	int a,b;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	printf("The lcm of %d and %d is %d",a,b,lcm(a,b));
}
int lcm(int a,int b)
{
int l;
	if(a%b==0){
	l=a;	
	}
	else if(b%a==0){
		l=b;
	}
	else{
		l=a*b;
	}
	return l;
}

