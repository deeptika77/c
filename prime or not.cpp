//to check whether th given number is prime or not
#include<stdio.h>
int check(int);
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	int b=check(n);
}
int check(int n){
	int i,c;
	for(i=1;i<=n;i++){
		if(n%i==0){
			c++;
		}
	}
	if(c==2){
		printf("%d is prime",n);
	}
	else{
		printf("%d is not prime",n);
	}
	
}
