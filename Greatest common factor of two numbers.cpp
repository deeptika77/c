// to find greatest commmon divisor(gcd)
#include<stdio.h>
int gcd(int,int);
int main(){
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	printf("\n The greatest common factor of %d and %d is %d",a,b,gcd(a,b));
}
int gcd(int a, int b){
int g;
	for(int i=1;i<=a && i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		{
			g=i;
		}
	}
	return g;
}
